#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers.
 * @min: Minimum range of values stored.
 * @max: Maximum range of values stored and number of elements.
 *
 * Return: Pointer to the new array.
 */
int *array_range(int min, int max)
{
	int *result;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	result = malloc(sizeof(int) * size);

	if (result == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		result[i] = min++;

	return (result);
}
