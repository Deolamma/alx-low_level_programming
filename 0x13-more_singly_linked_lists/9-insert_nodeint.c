#include "lists.h"
#include <stdlib.h>
/**
 * insert_nodeint_at_index - inserts a node at a certain index
 * @head: pointer to the ppointer to the irst elemnt of SLL
 * @idx: index of first element
 * @n: data to be inserted
 * Return: address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *curr_node;
	listint_t  *prev_node;
	unsigned int curr_index = 0;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	prev_node = NULL;
	curr_node = *head;
	while (curr_node != NULL)
	{
		if (curr_index == idx)
		{
			new_node->next = curr_node;
			if (prev_node != NULL)
				prev_node->next = new_node;
			else
				*head = new_node;
			return (new_node);
		}
		prev_node = curr_node;
		curr_node = curr_node->next;
		curr_index++;
	}
	if (curr_index == idx && prev_node != NULL)
	{
		prev_node->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}

