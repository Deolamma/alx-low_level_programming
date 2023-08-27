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
	dlistint_t *new_node, *fwd_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	fwd_node = current->next;
	new_node->n = n;
	/* Continue loop while curr_node != NULL OR idx != 0*/
	while (current && idx != 0)
	{
		current = current->next;
		if (fwd_node)
			fwd_node = fwd_node->next;
		idx--;
	}
	if (!(current) && idx > 0)
	{
		free(new_node);
		return (NULL);
	}
	/**
	 * covers cases insert at index 1 and 1 node in the list
	 * OR
	 * we are at the end of the list
	 */
	if (idx == 0 && !(current->next))
		return (add_dnodeint_end(h, n));
	current = current->prev;
	fwd_node = fwd_node->prev;
	current->next = new_node;
	new_node->prev = current;
	new_node->next = fwd_node;
	if (fwd_node)
		fwd_node->prev = new_node;
	return (*h);
}



