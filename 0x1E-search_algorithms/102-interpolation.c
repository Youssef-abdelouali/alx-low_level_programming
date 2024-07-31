#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array using
 * the Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The total number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index of the first occurrence of the value if found,
 * or -1 if the value is not found or if the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
    size_t low = 0;
    size_t high = size - 1;
    size_t pos = 0;

    if (array != NULL)
    {
        while ((array[high] != array[low]) &&
               (value >= array[low]) &&
               (value <= array[high]))
        {
            pos = low + (((double)(high - low) / (array[high] - array[low])) *
                         (value - array[low]));
            printf("Value checked at index [%lu] = [%d]\n", pos, array[pos]);
            if (array[pos] < value)
                low = pos + 1;
            else if (array[pos] > value)
                high = pos - 1;
            else
                return (pos);
        }
        if (value == array[low])
            return (low);
        printf("Value checked at index [%lu] is out of range\n", pos);
    }
    return (-1);
}
