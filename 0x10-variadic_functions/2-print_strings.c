#include "variadic_functions.h"

/**
 * print_strings - prints a string
 *
 * @separator: char
 * @n: int
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;

	va_start(args, n);

	while (i < n)
	{
		str = va_arg(args, char*);
		if (str != NULL)
			printf("%s", str);

		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
		i++;
	}

	va_end(args);

	printf("\n");
}
