#include "main.h"

/**
 * calloc_function - fills memory
 * @p: pointer
 * @b: char
 * @n: int
 * Return: p
 */
char *calloc_function(char *p, char b, unsigned int n)
{
	char *ptr = p;

	while (n--)
		*p++ = b;

	return (ptr);
}

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
	void *l;

	if (size == 0 || nmemb == 0)
		return (0);

	l = malloc(sizeof(int) * nmemb);
	if (l == NULL)
		return (0);
	calloc_function(l, 0, sizeof(int) * nmemb);

	return (l);
}
