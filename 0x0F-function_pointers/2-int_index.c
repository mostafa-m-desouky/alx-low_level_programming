#include "function_pointers.h"

/**
 *int_index - pointer functon
 *@array:array
 *@size:size of array
 *@cmp: is a pointer to the function to be used to compare values
 *Return:the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		for (int i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
