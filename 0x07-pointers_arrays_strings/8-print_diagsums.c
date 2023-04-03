#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Entry point
 *
 * a: array
 * @size: size of array
 * return: 0
 */

void print_diagsums(int *a, int size)
{
	int i, m1 = 0, m2 = 0;

	for (i = 0; i < size; i++)
	{
		m1 += a[i];
		m2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", m1);
	printf("%d\n", m2);
}
