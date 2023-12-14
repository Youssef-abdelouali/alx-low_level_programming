#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the first element in the linked list
 *
 * Return: The data inside the deleted element,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int popped_data;

	if (!head || !*head)
		return (0);

	popped_data = (*head)->n;
	next_node = (*head)->next;
	free(*head);
	*head = next_node;

	return (popped_data);
}

