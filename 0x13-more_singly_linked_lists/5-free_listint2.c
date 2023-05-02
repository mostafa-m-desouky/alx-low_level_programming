#include "lists.h"

/**
 * free_listint2 - Entry point
 *
 * @head: address of pointer
 *
 * return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, *t;

	if (!head)
		return;

	node = *head;
	while (node)
	{
		t = node;
		node = node->next;
		free(t);
	}
	*head = NULL;
}
