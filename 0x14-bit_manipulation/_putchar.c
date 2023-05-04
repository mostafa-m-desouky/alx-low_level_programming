#include "main.h"
#include <unistd.h>

/**
 * _outchar - writes the character
 *
 * @c: the character to print
 *
 * Return: on success 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
