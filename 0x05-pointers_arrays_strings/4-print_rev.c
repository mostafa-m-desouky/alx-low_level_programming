#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */

void print_rev(char *s)
{
	int l;
	l = _strlen(s);

	for (l -= 1; l >= 0; l--)
		_putchar(s[l]);
	_putchar('\n');
}
