#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint_end - Adds an element to the end of a DLL
 * @head: pointer to the address of the first element
 * @n: data to be added to the DLL
 * Return: Returns a pointer to the head of the list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	if (!(*head))
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	current = *head;
	while (current->next)
		current = current->next;

	current->next = new_node;
	new_node->prev = current;

	return (*head);
}
