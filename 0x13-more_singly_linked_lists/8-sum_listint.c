#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @head: First node in the linked list
 *
 * Return: Resulting sum
 */
int sum_listint(listint_t *head)
{
	int total_sum = 0;
	listint_t *current_node = head;

	do {
		total_sum += current_node->n;
		current_node = current_node->next;
	} while (current_node);

	return (total_sum);
}

