#include "lists.h"
#include <stdlib.h>
/**
 * free_list - frees memory allocated to SLL
 * @head: pointer to the address of the node of SLL
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *curNode = head;
	list_t *tmp;

	while (curNode != NULL)
	{
		tmp = curNode->next;
		free(curNode->str);
		free(curNode);
		curNode = tmp;
	}
}
