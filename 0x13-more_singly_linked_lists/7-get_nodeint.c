#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - gets the node at a certain index
 * @head: pointer to address of first element
 * @index: index of node to be returned
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int strt_index = 0;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	while (head != NULL && head->next != NULL)
	{
		if (strt_index == index)
			return (head);
		head = head->next;
		strt_index++;
	}
	if (strt_index == index)
	{
		return (head);
	}
	return (NULL);
}

