#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * add_nodeint_end - adds node to the end of SLL
 * @head: pointer to the pointer to first element of SLL
 * @n: int val to be added to end of SLL
 * Return: address to the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end_node;
	listint_t *tmp;

	end_node = malloc(sizeof(listint_t));
	if (end_node == NULL)
		return (NULL);
	end_node->n = n;
	end_node->next = NULL;
	tmp = *head;

	if (*head == NULL)
	{
		/**
		 * if head is NULL, make our node the first node
		 * Therefore it becomes the first and last node
		 */
		*head = end_node;
	} else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = end_node;
	}
	return (*head);
}
