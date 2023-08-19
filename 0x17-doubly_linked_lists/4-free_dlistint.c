#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - Frees a DLL
 * @head: address of first node of DLL
 * Return: Returns nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
