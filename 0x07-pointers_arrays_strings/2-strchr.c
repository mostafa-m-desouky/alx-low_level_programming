#include "main.h"
#include <stdio.h>

/**
 * _strchr - fills memory
 * @s: pointer
 * @c: constant
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int mostafa;

	for (mostafa = 0; s[mostafa] >= '\0'; mostafa++)
		if (s[mostafa] == c)
			return (s + mostafa);

	return ('\0');
}
