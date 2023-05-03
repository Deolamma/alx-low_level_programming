#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - Deletes a node at certain index
 * @head: pointer to poiner to first lement of SLL
 * @index: index of node to be deleted
 * Return: 1 SUCCESS or -1 FAILURE
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *curr_node;
	listint_t *prev_node;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		curr_node = *head;
		*head = (*head)->next;
		free(curr_node);
		return (1);
	}
	prev_node = NULL;
	curr_node = *head;
	for (i = 0; i < index && curr_node != NULL; i++)
	{
		prev_node = curr_node;
		curr_node = curr_node->next;
	}
	if (curr_node == NULL)
		return (-1);
	prev_node->next = curr_node->next;
	free(curr_node);
	return (1);
}
