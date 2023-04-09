#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 *
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int mos;

	for (mos = 0; mos < n; mos++)
		dest[mos] = src[mos];

	return (dest);
}
