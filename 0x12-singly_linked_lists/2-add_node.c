#include "lists.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
/**
 * add_node - Adds node to the beginnning of SLL
 * @head: pointer to pointer of address of previous head
 * @str: string value tot be copied
 * Return: reurns theaddress of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr = malloc(sizeof(list_t));

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
	ptr->next = *head;
	(*head) = ptr;
	return (*head);
}
