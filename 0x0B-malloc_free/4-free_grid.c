#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid created by alloc_grid function
 * @grid: the 2D grid to be freed
 * @height: height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
    int j;

    if (grid == NULL || height <= 0)
        return;

    for (j = 0; j < height; j++)
    {
        free(grid[j]);
    }

    free(grid);
}
