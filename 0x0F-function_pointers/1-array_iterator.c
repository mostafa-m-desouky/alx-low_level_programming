#include "function_pointers.h"

/**
 * array_iterator - pointer function
 * @array: array of elements
 * @size: array's size
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && size && action)
	{
		for (;i < size;)
		{
			(*action)(array[i]);
			i++;
		}
	}
}
