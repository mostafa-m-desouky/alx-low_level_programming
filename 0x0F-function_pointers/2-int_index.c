#include "function_pointers.h"

/**
 *int_index - pointer functon
 *@array:array
 *@size:size of array
 *@cmp: is a pointer to the function to be used to compare values
 *Return:the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int)) {
    int i;

    if (array && cmp)
        for (i = 0; i < size; i++) {
            if ((*cmp)(array[i]) != 0)
                return (i);
        }

    return (-1);
}

