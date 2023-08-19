#include "lists.h"
/**
 * dlistint_len - Gets the number of element present in a DLL
 * @h: pointer to the address where the first element of DLL is saved
 * Return: returns the number of elements present in DLL
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (counter);
	while (h)
	{
		if (h->prev == NULL && h->next == NULL)
		{
			counter = 1;
			return (counter);
		}
		counter ++;
		h = h->next;
	}
	return (counter);
}
