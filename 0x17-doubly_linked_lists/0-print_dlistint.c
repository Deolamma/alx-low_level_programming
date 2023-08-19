#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints the elements of a DLL
 * @h: points to the list to be traversed
 * Return: Returns the number of elements in the DLL
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h)
	{
		if (h->next == NULL)
		{
			printf("%d\n", h->n);
			counter = 1;
			return (counter);
		}
		printf("%d\n", h->n);
		counter += 1;
		h = h->next;
	}
	return (counter);
}
