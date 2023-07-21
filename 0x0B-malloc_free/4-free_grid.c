#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Frees a 2D array.
 * @grid: The 2D array to be freed.
 * @height: The height dimension of the grid.
 *
 * Description: Frees the memory of the 2D array.
 */
void free_grid(int **grid, int height)
{
    int row;

    for (row = 0; row < height; row++)
    {
        free(grid[row]);
    }
    free(grid);
}
