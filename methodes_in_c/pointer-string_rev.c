#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string to be modified
 *
 * Return: void
 */

void rev_string(char *s)
{
	int l = 0, i;
	char ch;

	l = _strlen(s);

	for (i = 0; i < l / 2; i++)
	{
		ch = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = ch;
	}
}
