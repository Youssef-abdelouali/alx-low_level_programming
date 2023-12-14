#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data in a listint_t list
 * @head: First node in the linked list
 *
 * Return: Resulting sum
 */
int sum_listint(listint_t *head)
{
	int totalSum = 0;
	listint_t *currentNode = head;

	while (currentNode)
	{
		totalSum += currentNode->n;
		currentNode = currentNode->next;
	}

	return (totalSum);
}

