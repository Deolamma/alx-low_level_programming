#include "lists.h"
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
/**
 * add_node_end - adds a node the end of SLL
 * @head: pointer to pointer to the address of head of SLL
 * @str: string to be include in last node element
 * Return: returns a pointer to the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));
	list_t *tmp = *head;

	if (ptr == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->len = strlen(str);
	ptr->next = NULL;
	if (*head == NULL)
	{
		/**
		 * if head is null assign the new pointer to be the
		 * pointer
		 */
		*head = ptr;
	} else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = ptr;
	}
	return (*head);
}

