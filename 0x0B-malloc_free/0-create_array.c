#include "main.h"


/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character to initialize
 * Return: a pointer to the array initialized , or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i;

	if (size == 0)
		return (NULL);
	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (i = 0; i < size; i++)
				array[i] = c;
		}
	}
	return (array);
}
