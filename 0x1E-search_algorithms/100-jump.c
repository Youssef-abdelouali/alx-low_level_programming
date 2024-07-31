#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using the
 * Jump search algorithm.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The total number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index of the first occurrence of the value if found,
 * or -1 if the value is not found or if the array is NULL.
 */
int jump_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = 0, i = 0;

    if (array != NULL)
    {
        while (high < size && array[high] < value)
        {
            low = high;
            high += sqrt(size);
            printf("Value checked at index [%lu] = [%d]\n", low, array[low]);
        }
        printf("Value might be between indexes [%lu] and [%lu]\n", low, high);
        for (i = low; i <= high && i < size; i++)
        {
            printf("Value checked at index [%lu] = [%d]\n", i, array[i]);
            if (array[i] == value)
                return (i);
        }
    }
    return (-1);
}
