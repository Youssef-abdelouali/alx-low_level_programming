#include "lists.h"

/**
 * free_listint2 - Frees a linked list and sets head to NULL
 * @head: Pointer to the list to be freed
 */
void free_listint2(listint_t **head)
{
	if (!head)
		return;

	while (*head)
	{
		listint_t *temp = (*head)->next;

		free(*head);
		*head = temp;
	}

	*head = NULL;
}

