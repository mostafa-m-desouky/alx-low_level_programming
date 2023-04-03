#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search
 * @s: string
 * @accept: sting to match
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int mos, mag;

	for (mos = 0; s[mos] != '\0'; mos++)
		for (mag = 0; accept[mag] != '\0'; mag++)
		{
			if (s[mos] == accept[mag])
				return (s + mos);
		}

	return (NULL);
}
