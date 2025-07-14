#include "variadic_functions.h"

/**
 * print_strings - prints a string
 *
 * @separator: char
 * @n: int
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...) {
    	va_list args;
    	char *str;
    	unsigned int i;

    	if (n == 0) {
        	printf("\n");
        	return;
    	}

    	va_start(args, n);

    	for (i = 0; i < n; i++) {
        	str = va_arg(args, char *);

        	if (str == NULL)
            		printf("(nil)");
        	else
            		printf("%s", str);

        	if (separator != NULL && i != n - 1)
            		printf("%s", separator);
    	}

    	va_end(args);
    	printf("\n");
}
