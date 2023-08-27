#include "lists.h"
/**
 * sum_dlistint - sums the elements of a DLL
 * @head: Address of where the first node of DLL is saved
 * Return: returns sum of all data in DLL
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
