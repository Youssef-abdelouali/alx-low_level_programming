# 0x13. C - More singly linked lists

## Overview 
This document covers additional concepts and operations related to singly linked lists in the C programming language.

## Tasks :

### 1 :  0. Print list

```
#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
    size_t num = 0;

    for (; h; h = h->next, num++)
    {
        printf("%d\n", h->n);
    }

    return num;
}

```

### 2 :  1. List length

```
#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked list.
 * @h: Linked list of type listint_t to traverse.
 *
 * Return: Number of nodes in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t num = 0;

    for (; h; h = h->next)
    {
        num++;
    }

    return num;
}

```
### 3 :  2. Add node

```
#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a linked list.
 * @head: Pointer to the pointer of the first node in the list.
 * @n: Data to insert in the new node.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node;

    // Allocate memory for the new node
    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    // Set the data and link of the new node
    new_node->n = n;
    new_node->next = *head;

    // Update the head pointer to point to the new node
    *head = new_node;

    return new_node;
}
```

### 4 : 3. Add node at the end

```
#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the end of a linked list.
 * @head: Pointer to the pointer of the first element in the list.
 * @n: Data to insert in the new element.
 *
 * Return: Pointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node;
    listint_t *last_node;

    // Allocate memory for the new node
    new_node = malloc(sizeof(listint_t));
    if (!new_node)
        return (NULL);

    new_node->n = n;
    new_node->next = NULL;

    // If the list is empty, set the new node as the head
    if (*head == NULL)
    {
        *head = new_node;
        return (new_node);
    }

    // Traverse the list to find the last node
    for (last_node = *head; last_node->next; last_node = last_node->next)
    {
        // No need for loop body; we're only advancing to the end
    }

    // Attach the new node to the last node
    last_node->next = new_node;

    return (new_node);
}

```

### 5 : 4. Free list

```
#include "lists.h"

/**
 * free_listint2 - frees a linked list and sets the head to NULL
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
    listint_t *current_node;

    if (head == NULL)
        return;

    while (*head)
    {
        current_node = (*head)->next;
        free(*head);
        *head = current_node;
    }

    *head = NULL;
}

```
