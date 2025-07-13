#include "main.h"

/**
 * string_nconcat - Entry point
 *
 * @s1: char pointer
 * @s2: char pointer
 * @n: int
 *
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i, l1 = 0, l2 = 0;
    char *concat;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    // calculate length of s1
    for (i = 0; s1[i] != '\0'; i++)
        l1++;

    // calculate length of s2
    for (i = 0; s2[i] != '\0'; i++)
        l2++;

    if (n > l2)
        n = l2;

    concat = malloc(sizeof(char) * (l1 + n + 1));
    if (concat == NULL)
        return NULL;

    // copy s1
    for (i = 0; i < l1; i++)
        concat[i] = s1[i];

    // copy n characters from s2
    for (unsigned int j = 0; j < n; j++)
        concat[l1 + j] = s2[j];

    concat[l1 + n] = '\0';

    return concat;
}
