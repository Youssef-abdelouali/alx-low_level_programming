# 0x0B. C - malloc, free

## Tasks :

0. Float like a butterfly, sting like a bee


_Write a function that creates an array of chars, and initializes it with a specific char._

```sh
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and assigns char c to each element.
 * @size: The size of the array.
 * @c: The character to assign.
 *
 * Return: Pointer to the array, NULL if fails.
 */
char *create_array(unsigned int size, char c)
{
    char *str;
    unsigned int i;

    str = malloc(sizeof(char) * size);

    /* Check for valid size and allocation */
    if (size == 0 || str == NULL)
        return (NULL);

    /* Assign char c to each element */
    i = 0;
    do {
        str[i] = c;
        i++;
    } while (i < size);

    return (str);
}

```

1. The woman who has no imagination has no wings

_Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter._

```sh 
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string to a new memory space location.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, NULL if fails.
 */
char *_strdup(char *str)
{
    char *duplicate;
    int i, length = 0;

    if (str == NULL)
        return (NULL);

    /* Calculate the length of the string */
    i = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }

    /* Allocate memory for the duplicated string */
    duplicate = malloc(sizeof(char) * (length + 1));

    if (duplicate == NULL)
        return (NULL);

    /* Copy the string to the new memory space */
    for (i = 0; str[i]; i++)
        duplicate[i] = str[i];

    return (duplicate);
}

```

2. He who is not courageous enough to take risks will accomplish nothing in life

_Write a function that concatenates two strings._

```sh 
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, NULL if fails.
 */
char *str_concat(char *s1, char *s2)
{
    char *concatenated;
    int i, len1 = 0, len2 = 0;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate lengths of the strings */
    i = 0;
    while (s1[i] != '\0')
    {
        len1++;
        i++;
    }

    i = 0;
    while (s2[i] != '\0')
    {
        len2++;
        i++;
    }

    concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

    if (concatenated == NULL)
        return (NULL);

    /* Copy the first string to the concatenated string */
    i = 0;
    while (s1[i] != '\0')
    {
        concatenated[i] = s1[i];
        i++;
    }

    /* Copy the second string to the concatenated string */
    i = 0;
    while (s2[i] != '\0')
    {
        concatenated[len1 + i] = s2[i];
        i++;
    }
    concatenated[len1 + i] = '\0';

    return (concatenated);
}
```

3. If you even dream of beating me you'd better wake up and apologize

_Write a function that returns a pointer to a 2 dimensional array of integers._

```sh 
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

```

4. It's not bragging if you can back it up

_Write a function that frees a 2 dimensional grid previously created by your alloc_grid function._

```sh
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

```
















