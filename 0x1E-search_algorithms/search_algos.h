#ifndef SEARCH_H
#define SEARCH_H

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/**
 * struct listint_s - Node of a singly linked list
 *
 * @n: Integer value stored in the node
 * @index: Position of the node in the list
 * @next: Pointer to the next node in the list
 *
 * Description: Represents a node in a singly linked list used for
 * various search algorithms in the Holberton project.
 */
typedef struct listint_s
{
    int n;
    size_t index;
    struct listint_s *next;
} listint_t;

/**
 * linear_search - Searches for a value in an array using Linear search.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the first occurrence of the value, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value);

/**
 * binary_search - Searches for a value in a sorted array using Binary search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */
int binary_search(int *array, size_t size, int value);

/**
 * jump_search - Searches for a value in a sorted array using Jump search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */
int jump_search(int *array, size_t size, int value);

/**
 * interpolation_search - Searches for a value in a sorted array using Interpolation search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value);

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search.
 *
 * @array: Pointer to the first element of the sorted array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The index of the value if found, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value);

/**
 * jump_list - Searches for a value in a sorted singly linked list using Jump search.
 *
 * @list: Pointer to the head of the singly linked list.
 * @size: Number of elements in the list.
 * @value: The value to search for.
 *
 * Return: Pointer to the node containing the value, or NULL if not found.
 */
listint_t *jump_list(listint_t *list, size_t size, int value);

/**
 * print_list - Prints the elements of a singly linked list.
 *
 * @list: Pointer to the head of the singly linked list.
 */
void print_list(const listint_t *list);

/**
 * create_list - Creates a singly linked list from an array of integers.
 *
 * @array: Pointer to the array of integers.
 * @size: Number of elements in the array.
 *
 * Return: Pointer to the head of the newly created list.
 */
listint_t *create_list(int *array, size_t size);

/**
 * free_list - Frees the memory allocated for a singly linked list.
 *
 * @list: Pointer to the head of the singly linked list to be freed.
 */
void free_list(listint_t *list);

#endif /* SEARCH_H */
