#include "main.h"

/**
 * puts_half - Prints half of a string
 * @str: The string to print
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i, len = 0;

	len = _strlen(str);
	if (len % 2 == 0)
	{
		i = len / 2;
	}
	else {
		i = (len - 1) / 2;
		i += 1;
	}
	for (; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}
