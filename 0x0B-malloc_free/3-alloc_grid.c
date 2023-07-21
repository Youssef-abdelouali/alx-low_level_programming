#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates a 2D array of integers with the given width and height.
 * @width: The width of the 2D array.
 * @height: The height of the 2D array.
 *
 * Return: A pointer to the 2D array, NULL if fails.
 */
int **alloc_grid(int width, int height)
{
    int **grid;
    int x, y;

    if (width <= 0 || height <= 0)
        return (NULL);

    /* Allocate memory for the rows */
    grid = malloc(sizeof(int *) * height);

    if (grid == NULL)
        return (NULL);

    /* Allocate memory for each row */
    for (x = 0; x < height; x++)
    {
        grid[x] = malloc(sizeof(int) * width);

        /* Check for allocation failure and free previously allocated memory */
        if (grid[x] == NULL)
        {
            for (; x >= 0; x--)
                free(grid[x]);

            free(grid);
            return (NULL);
        }
    }

    /* Initialize the elements of the grid to 0 */
    for (x = 0; x < height; x++)
    {
        for (y = 0; y < width; y++)
            grid[x][y] = 0;
    }

    return (grid);
}
