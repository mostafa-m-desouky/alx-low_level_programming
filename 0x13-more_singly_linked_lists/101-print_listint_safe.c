#include "lists.h"

/**
 * _r - reallocates memory
 * @list: address of pointer
 * @size: size_t
 * @new: new node
 *
 * Return: pointer
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t i = 0;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	while (i < size - 1)
	{
		newlist[i] = list[i];
		i++;
	}
	newlist[i] = new;
	free(list);
	return (newlist);
}


/**
 * print_listint_safe - Entry point
 *
 * @head: pointer
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int i = 0, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		while (i < num)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
			i++;
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
