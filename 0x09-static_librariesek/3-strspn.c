#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix
 * @s: string
 * @accept: bytes
 *
 * Return: unsigned int.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int mos, mag;

	for (mos = 0; s[mos] != '\0'; mos++)
		for (mag = 0; accept[mag] != s[mos]; mag++)
			if (accept[mag] == '\0')
				return (mos);

	return (mos);
}
