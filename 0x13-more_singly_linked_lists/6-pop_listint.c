#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - pops the node at the beginning of SLL
 * @head: pointer to pointer to the first node of SLL
 * Return: data in headnode
 */
int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (*head == NULL)
		return (0);
	ptr = *head;
	n = ptr->n;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	if (*head == NULL)
	{
		return (n);
	}
	return (n);
}
