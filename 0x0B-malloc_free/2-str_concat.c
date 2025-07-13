#include "main.h"

/**
 * str_concat - concatenates 2 strings
 * @s1: first string
 * @s2: string to add to end of of first string
 * Return: pointer to newly allocated string concatenation
 */

char *str_concat(char *s1, char *s2) {
    int i, l1 = 0, l2 = 0;
    char *concat;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (i = 0; s1[i] != '\0'; i++)
        l1++;
    for (i = 0; s2[i] != '\0'; i++)
        l2++;

    concat = malloc(sizeof(char) * (l1 + l2 + 1));

    if (concat == NULL)
        return NULL;

    for (i = 0; i < l1; i++)
        concat[i] = s1[i];
	
    for (i = 0; i < l2; i++)
        concat[l1 + i] = s2[i];

    concat[l1 + l2] = '\0';

    return concat;
}
