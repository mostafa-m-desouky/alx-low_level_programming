#include "lists.h"

/**
 * pop_listint - Entry point
 *
 * @head: address of pointer
 *
 * Return: value of popped node to the first node
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int i;

	if (!head || !*head)
		return (0);

	node = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = node;

	return (i);
}
