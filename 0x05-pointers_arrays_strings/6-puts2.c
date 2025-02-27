#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be treated
 *
 * Return: void
 */

void puts2(char *str) {
        int len, i;

        len = _strlen(str);

        for (i = 0; i < len; i += 2){
                _putchar(str[i]);
        }
        _putchar('\n');
}
