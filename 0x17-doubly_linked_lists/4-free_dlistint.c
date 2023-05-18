#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - free doubly linked list with only integer data, no strings
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
