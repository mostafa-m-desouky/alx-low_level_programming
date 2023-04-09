#include "main.h"
#include <stdio.h>

/**
 * _strstr - entry point
 * @haystack: input
 * @needle: input
 *
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *mos = haystack;
		char *mag = needle;

		while (*mos == *mag && *mag != '\0')
		{
			mos++;
			mag++;
		}
		if (*mag == '\0')
			return (haystack);
	}
	return (NULL);
}
