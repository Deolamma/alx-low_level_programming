#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint - frees memory allocated to SLL
 * @head: pinter to address of first elemnt
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *curNode;
	listint_t *tmp;

	curNode = head;
	while (curNode != NULL)
	{
		tmp = curNode->next;
		free(curNode);
		curNode = tmp;
	}
}
