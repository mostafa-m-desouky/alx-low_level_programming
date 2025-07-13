#include "main.h"

/**
 * _strdup - duplicates a string into newly allocated array
 * @str: string to duplicate
 * Return: 0
 */
char *_strdup(char *str) {
        int i, l = 0;
        char *copy;

        if (str == NULL)
                return NULL;
	
        for (i = 0; str[i] != '\0'; i++)
                l++;
	
        copy = malloc(sizeof(char) * (l + 1));
	
        if (copy == NULL)
                return NULL;
	
        for (i = 0; i < l; i++)
                copy[i] = str[i];
	
        copy[i] = '\0';
	
        return copy;
}
