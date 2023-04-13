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
	int i = 0;
	int length, *ptr;

	if (min > max)
		return (0);

	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (0);
	while (i < length)
	{
		ptr[i] = min++;
		i++;
	}
	return (ptr);
}
