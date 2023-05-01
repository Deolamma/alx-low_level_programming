#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * listint_len - returns the number of elements of SLL
 * @h: pointer to first element of SLL
 * Return: number of elemnts in SLL
 */
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

