#include "main.h"

/**
 * _outchar - writes the character
 *
 * @c: the character to print
 *
 * Return: on success 1.
 */

int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}
