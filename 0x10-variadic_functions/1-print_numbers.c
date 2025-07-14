#include "variadic_functions.h"

/**
 * print_numbers - prints number
 *
 * @separator: char
 * @n: int
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...) {
    	va_list args;
    	unsigned int i;

    	if (n == 0) {
        	printf("\n");
        	return;
    	}

    	va_start(args, n);

    	for (i = 0; i < n; i++) {
        	printf("%d", va_arg(args, int));

        	if (i != n - 1 && separator != NULL)
            		printf("%s", separator);
    	}

    	va_end(args);
    	printf("\n");
}

