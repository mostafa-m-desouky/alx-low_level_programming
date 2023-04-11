#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 *
 * @width: int
 * @height: int
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int **t;
	t = malloc(sizeof(*t) * height);

	if (width <= 0 || height <= 0 || t == 0)
		return (NULL);
	else
	{
		for (int i = 0; i < height; i++)
		{
			t[i] = malloc(sizeof(**t) * width);
			if (t[i] == 0)
			{
				while (--i)
					free(t[i]);
				free(t);
				return (NULL);
			}
			for (int j = 0; j < width; j++)
			{
				t[i][j] = 0;
			}
		}
	}
	return (t);
}
