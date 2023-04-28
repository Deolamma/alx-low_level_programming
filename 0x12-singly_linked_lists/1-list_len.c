#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * list_len - prints the number of  elements/nodes present in a SLL
 * @h: pointer to a memory address that points to the head of the list
 * Return: Returns the number of element present in the list
 */
size_t list_len(const list_t *h)
{
	unsigned int ncount = 0;

	while (h != NULL)
	{
		ncount++;
		h = h->next;
	}
	return (ncount);
}

