#include "main.h"
#include <stdio.h>

int _is(char *s, int start, int end, int mod);

/**
 * _palindrome - returns the last n
 *
 * @s: pointer
 *
 * Return: integer
 */

int _palindrome(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += _palindrome(s + 1) + 1;

	return (n);
}

/**
 * is_palindrome - Entry point
 *
 * @s: pointer
 *
 * Return: Always 0
 */

int is_palindrome(char *s)
{
	int end = _palindrome(s);

	return (_is(s, 0, end - 1, end % 2));
}

/**
 * _is - check
 *
 * @s: string
 * @start: int
 * @end: int
 * @mod: int
 *
 * Return: 0 or 1
 */

int _is(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (_is(s, start + 1, end - 1, mod));
}
