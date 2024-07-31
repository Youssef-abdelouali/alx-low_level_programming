#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted singly linked list of integers
 *             using the Jump search algorithm.
 *
 * @list: Pointer to the head of the linked list.
 * @size: Number of nodes in the linked list.
 * @value: The value to search for.
 *
 * Return: Pointer to the first node where the value is located,
 *         or NULL if the value is not present or if the list is NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
    listint_t *low = NULL, *high = NULL;
    size_t limit = 0;

    if (list == NULL)
        return (NULL);

    low = list;
    high = list;
    
    // Jump ahead in the list until the end of the list or a value >= the search value is found
    while (high->next != NULL && high->index < size && high->n < value)
    {
        low = high;
        limit += sqrt(size); // Move ahead by sqrt(size) steps
        // Move the 'high' pointer to the new position
        while (high->next != NULL && high->index < limit)
            high = high->next;
        printf("Value checked at index [%lu] = [%d]\n", high->index, high->n);
    }

    // Print the range where the search will be performed
    printf("Value found between indexes [%lu] and [%lu]\n", low->index, high->index);
    
    // Perform a linear search between 'low' and 'high'
    while (low != NULL && low->index <= high->index)
    {
        printf("Value checked at index [%lu] = [%d]\n", low->index, low->n);
        if (low->n == value)
            return (low);
        low = low->next;
    }

    return (NULL);
}
