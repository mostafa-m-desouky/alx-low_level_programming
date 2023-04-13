#include "main.h"

/**
 * _calloc - Entry point
 *
 * @nmemb: int
 * @size: int
 *
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *n;

	if (nmemb == 0 || size == 0)
		return (0);

	l = nmemb * size;
	n = malloc(l);

	if (n == 0)
		return (0);
	while (i < l)
	{
		n[i] = 0;
		i++;
	}
	return (n);
}
