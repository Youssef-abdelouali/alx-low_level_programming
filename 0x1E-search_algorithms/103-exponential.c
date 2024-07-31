#include "search_algos.h"

/**
 * b_search - Searches for a value in a sorted array using the Binary
 * search algorithm.
 *
 * @array: Pointer to the first element of the sorted array.
 * @low: The starting index for the search range.
 * @high: The ending index for the search range.
 * @value: The value to search for within the array.
 *
 * Return: The index of the first occurrence of the value if found,
 * or -1 if the value is not found or if the array is NULL.
 */
int b_search(int *array, size_t low, size_t high, int value)
{
    size_t left = low;
    size_t right = high - 1;
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

/**
 * exponential_search - Searches for a value in a sorted array using
 * the Exponential search algorithm.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The total number of elements in the array.
 * @value: The value to search for within the array.
 *
 * Return: The index of the first occurrence of the value if found,
 * or -1 if the value is not found or if the array is NULL.
 */
int exponential_search(int *array, size_t size, int value)
{
    size_t bound = 1;
    size_t min = 0;
    int result;

    if (array != NULL)
    {
        while (bound < size && array[bound] < value)
        {
            printf("Value checked at index [%lu] = [%d]\n", bound, array[bound]);
            bound *= 2;
        }
        if (bound < size)
            min = bound / 2;
        else
            min = size - 1;
        printf("Value found between indexes [%lu] and [%lu]\n", min, bound < size ? bound : size - 1);
        result = b_search(array, min, bound < size ? bound : size, value);
        if (result != -1)
            return (result);
    }
    return (-1);
}
