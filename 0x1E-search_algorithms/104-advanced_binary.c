#include "search_algos.h"
#include <stdio.h>

/**
 * print_subarray - Prints the elements of the array between indices `left` and `right`.
 *
 * @array: Pointer to the first element of the array.
 * @left: The starting index of the subarray.
 * @right: The ending index of the subarray.
 */
void print_subarray(int *array, size_t left, size_t right)
{
    size_t i;

    printf("Searching in array: ");
    for (i = left; i < right; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("%d\n", array[right]);
}

/**
 * advanced_binary_recursive - Recursively performs a binary search to find the first occurrence of a value.
 *
 * @array: Pointer to the first element of the sorted array.
 * @left: The starting index of the subarray to search.
 * @right: The ending index of the subarray to search.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value if found,
 * or -1 if the value is not found or if the array is NULL.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
    size_t middle;

    if (left > right || array == NULL)
        return (-1);

    middle = left + (right - left) / 2;
    print_subarray(array, left, right);

    if (array[middle] > value)
        return advanced_binary_recursive(array, left, middle - 1, value);
    else if (array[middle] < value)
        return advanced_binary_recursive(array, middle + 1, right, value);
    else
    {
        if (middle == left || array[middle - 1] != value)
            return (middle);
        return advanced_binary_recursive(array, left, middle - 1, value);
    }
}

/**
 * advanced_binary - Searches for the first occurrence of a value in a sorted array
 * of integers using a recursive binary search algorithm.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: The total number of elements in the array.
 * @value: The value to search for within the array.
 *
 * Return: The index of the first occurrence of the value if found,
 * or -1 if the value is not found or if the array is NULL.
 */
int advanced_binary(int *array, size_t size, int value)
{
    return advanced_binary_recursive(array, 0, size - 1, value);
}
