#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_list - prints the list of elements present in a SLL
 * @h: pointer to a memory address that points to the head of the list
 * Return: Returns the number of element present in the list
 */
size_t print_list(const list_t *h)
{
	unsigned int ncount = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		} else
			printf("[0] (nil)\n");
		ncount++;
		h = h->next;
	}
	return (ncount);
}

