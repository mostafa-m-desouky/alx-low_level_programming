#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @str: the string to get the length of
 *
 * Return: The lenght of @str
 */

int _strlen(char *s)
{
        int len;

        for (len = 0; *s != '\0'; s++) {
                len++;
        }
        return(len);
}
