#include "variadic_functions.h"

/**
 * sum_them_all - sums variable
 *
 * @n: int
 * @...: integers
 *
 * Return: the integer sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	int sum = 0;

	if (!n)
		return (0);

	va_start(args, n);
	for (unsigned int i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);

	return (sum);
}
