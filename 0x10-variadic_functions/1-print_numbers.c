#include "variadic_functions.h"

/**
 * print_numbers - prints number
 *
 * @separator: char
 * @n: int
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);

	while (i < n)
	{
		printf("%i", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(args);

	putchar('\n');
}
