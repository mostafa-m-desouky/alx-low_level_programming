#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: int
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return ptr;
}
