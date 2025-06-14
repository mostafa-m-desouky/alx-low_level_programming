#include "function_pointers.h"

/**
 * array_iterator - pointer function
 * @array: array of elements
 * @size: array's size
 * @action: pointer to function
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int)) {
    size_t i;
    if (array && size && action)
        for (i = 0; i < size; i++)
            (*action)(array[i]);

}
