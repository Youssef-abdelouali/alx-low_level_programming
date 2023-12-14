#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: Pointer to the first element in the linked list
 *
 * Return: Data inside the deleted element, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	if (!head || !*head)
		return (0);

	int data = (*head)->n; /* Store data to be returned */
	listint_t *next_node = (*head)->next; /* Store next node before freeing */

	free(*head); /* Free the current head node */
	*head = next_node; /* Move head to the next node */

	return (data);
}

