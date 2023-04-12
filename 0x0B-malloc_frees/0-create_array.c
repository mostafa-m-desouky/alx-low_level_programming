#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: int
 * @c: char
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *s = malloc(size);

	if (size == 0 || s == 0)
		return (0);
	while (size--)
		s[size] = c;

	return (s);
}
