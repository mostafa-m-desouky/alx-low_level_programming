#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string to print
 *
 * Return: void
 */

void print_rev(char *s) {
    char *end = s;

    while (*end != '\0')
        end++;

    end--; 

    while (end >= s) {
        _putchar(*end);
        end--;
    }

    _putchar('\n');
}
