#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: pointer
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int i = 1, m = 0;
	char *s;

	if (str == NULL)
		return (NULL);
	while (str[i])
		i++;
	s = malloc((sizeof(char) * 1) + 1);

	if (s == NULL)
		return (NULL);
	while (m < i)
	{
		s[m] = str[m];
		m++;
	}
	s[m] = '\0';
	return (s);
}
