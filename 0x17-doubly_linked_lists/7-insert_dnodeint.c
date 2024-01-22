#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to the head of the list.
 * @idx: Index of the new node.
 * @n: Value of the new node.
 * Return: Address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	unsigned int index;

	new_node = NULL;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	else
	{
		current = *h;
		index = 0;

		while (current != NULL && index < idx - 1)
		{
			current = current->next;
			index++;
		}

		if (current != NULL)
		{
			if (current->next == NULL)
			{
				new_node = add_dnodeint_end(h, n);
			}
			else
			{
				new_node = malloc(sizeof(dlistint_t));
				if (new_node != NULL)
				{
					new_node->n = n;
					new_node->prev = current;
					new_node->next = current->next;
					current->next->prev = new_node;
					current->next = new_node;
				}
			}
		}
	}

	return (new_node);
}
