#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * using the linear search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: The total number of elements in the array.
 * @value: The value to search for within the array.
 *
 * Return: The index of the first occurrence of value in the array,
 * or -1 if the value is not found or if the array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    if (array != NULL)
    {
        for (i = 0; i < size; i++)
        {
            printf("Value checked array[%lu] = [%d]\n", i, array[i]);
            if (array[i] == value)
            {
                return (i);
            }
        }
    }
    return (-1);
}
