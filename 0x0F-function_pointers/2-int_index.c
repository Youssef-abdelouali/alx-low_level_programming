#include "function_pointers.h"

/**
 * int_index - Returns the index of
 * the first element for which the comparison
 * function returns true.
 * @array: The array to search.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the comparison function to be used.
 *
 * Return: The index of the first
 * element for which the comparison function
 * returns true. If no element matches or if array is NULL, returns -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}

	return (-1);
}
