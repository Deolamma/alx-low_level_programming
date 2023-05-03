#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Sums the data part of a SLL
 * @head: this is the pointer to the first element in SLL
 * Return: sum of data in nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
	{
		sum = head->n;
		return (sum);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

