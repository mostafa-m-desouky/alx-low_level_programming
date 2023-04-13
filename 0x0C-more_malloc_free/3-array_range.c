#include "main.h"

/**
 * array_range - Entry point
 *
 * @min: int
 * @max: int
 *
 * Return: 0
 */

int *array_range(int min, int max)
{
	int length, *ptr;

	if (min > max)
		return (0);

	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (0);
	for (int i = 0; i < length; i++)
		ptr[i] = min++;
	return (ptr);
}
