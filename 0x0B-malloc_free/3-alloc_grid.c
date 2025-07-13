#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2D array of integers
 * @width: number of columns
 * @height: number of rows
 *
 * Return: pointer to the 2D array, or NULL on failure
 */

int **alloc_grid(int width, int height)
{
    int i, j;
    int **grid;

    // Reject invalid sizes
    if (width <= 0 || height <= 0)
        return NULL;

    // Allocate memory for rows (array of int *)
    grid = malloc(sizeof(int *) * height);
    if (grid == NULL)
        return NULL;

    // Allocate memory for each row
    for (i = 0; i < height; i++)
    {
        grid[i] = malloc(sizeof(int) * width);
        if (grid[i] == NULL)
        {
            // Free previously allocated rows
            for (j = 0; j < i; j++)
                free(grid[j]);
            free(grid);
            return NULL;
        }
    }

    // Initialize all elements to 0
    for (i = 0; i < height; i++)
        for (j = 0; j < width; j++)
            grid[i][j] = 0;

    return grid;
}
