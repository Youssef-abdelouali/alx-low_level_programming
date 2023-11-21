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

return (num);
}

