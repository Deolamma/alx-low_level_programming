#include "lists.h"
#include <stdlib.h>
/**
 * insert_dnodeint_at_index - inserts an element at a given node
 * @h: pointer to the address of where the node is stored
 * @idx: index in which element will be inserted at
 * @n: data to be stored at index
 * Return: Returns the address of the head element
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx,
		int n)
{
	dlistint_t *new_node, *forward_node, *current;

	if (idx == 0 && !(*h))
		add_dnodeint(&(*h), n);

	if ((idx == 1 || idx == 0) && (!(*h)->next))
		add_dnodeint_end(&(*h), n);
	current = *h;
	forward_node = current->next;
	while (idx != 0 && forward_node)
	{
		forward_node = forward_node->next;
		current = current->next;
		idx--;
	}
	if (!(current->next) && !(forward_node) && idx == 0)
	{
		add_dnodeint_end(&(*h), n);
	} else if (idx == 0 && forward_node && current)
	{
		new_node = malloc(sizeof(dlistint_t));
		if (!new_node)
			return (NULL);

		new_node->n = n;
		current->next = new_node;
		new_node->prev = current;
		new_node->next = forward_node;
		forward_node->prev = new_node;
		return (*h);
	}
	return (NULL);
}



