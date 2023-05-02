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

	if (*head == NULL)
		return (0);
	ptr = *head;
	*head = (*head)->next;
	free(ptr);
	ptr = NULL;
	return ((*head)->n);
}
