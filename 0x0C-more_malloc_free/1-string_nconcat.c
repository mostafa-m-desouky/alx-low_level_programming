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
	char *s;
	unsigned int i, m, s1_l, s2_l;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";

	for (s1_l = 0; s1[s1_l] != '\0'; s1_l++)
		;
	for (s2_l = 0; s2[s2_l] != '\0'; s2_l++)
		;
	s = malloc(s1_l + n + 1);
	if (s == 0)
		return (0);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (m = 0; m < n; m++)
	{
		s[i] = s2[m];
		i++;
	}
	s[i] = '\0';
	return (s);
}
