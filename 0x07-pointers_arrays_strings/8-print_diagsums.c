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
	int i, m, sum1 = 0, sum2 = 0;

	for (i = 0; i <= (size * size); i += size + 1)
		sum1 += a[i];

	for (m = size - 1; m <= (size * size) - size; m += size - 1)
		sum2 += a[m];
	printf("%d, %d\n", sum1, sum2);
}
