#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * free_listint2 - frees memory allcated to SLL
 * @head: pointer to the pointer to the first element of SLL
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *curNode;
	listint_t *tmp;

	curNode = *head;
	if (head == NULL)
	{
		return;
	}
	while (curNode != NULL)
	{
		tmp = curNode->next;
		free(curNode);
		curNode = tmp;
	}
	*head = NULL;
}
