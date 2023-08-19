#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds node to the beginning of a DLL
 * @head: pointer to the address of the first element of DLL
 * @n: data to be stored in DLL
 * Return: returns the address to the element at beginning of DLL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	/*recall on 1st call *head == NULL*/
	/*On 2nd call *head = &"previous"(new_node)*/
	new_node->next = (*head);

	if (*head)
		(*head)->prev = new_node;

	(*head) = new_node;
	return (new_node);
}
