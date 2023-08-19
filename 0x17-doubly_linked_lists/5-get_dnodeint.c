#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the node at a certain index
 * @head: address of first element of DLL
 * @index: index of element to be retrieved
 * Return: Returns the element at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	if (index == 0)
		return (head);
	while (index != 0 && head)
	{
		head = head->next;
		index--;
	}
	if (head)
		return (head);
	return (NULL);
}
