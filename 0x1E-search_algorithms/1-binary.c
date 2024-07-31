#include "search_algos.h"

/**
 * binary_search - Performs a binary search for a value in a sorted
 * array of integers.
 *
 * @array: Pointer to the first element of the sorted array to search in.
 * @size: The total number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index of the first occurrence of the value if found,
 * or -1 if the value is not found or if the array is NULL.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0;
    size_t right = size - 1;
    size_t middle = 0;
    size_t i = 0;

    if (array != NULL)
    {
        while (left <= right)
        {
            middle = (left + right) / 2;
            printf("Searching in array: ");
            for (i = left; i < right; i++)
            {
                printf("%d, ", array[i]);
            }
            printf("%d\n", array[i]);
            if (array[middle] < value)
            {
                left = middle + 1;
            }
            else if (array[middle] > value)
            {
                right = middle - 1;
            }
            else
            {
                return (middle);
            }
        }
    }
    return (-1);
}
