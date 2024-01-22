#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int _count_ = 0;


	if (h == NULL)
		return (_count_);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		_count_++;
		h = h->next;
	}

	return (_count_);
}
