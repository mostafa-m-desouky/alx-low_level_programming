#include "main.h"

/**
 * malloc_checked - Entry point
 * @b: int
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);

	return (m);
}
