#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to the head of the list.
 * @n: Value of the new node.
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head != NULL)
	{
		dlistint_t *tail = *head;

		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new;
		new->prev = tail;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
