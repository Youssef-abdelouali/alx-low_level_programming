#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: Pointer to the head of the list.
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *next_node;

while (head != NULL)
{
next_node = head->next;
free(head);
head = next_node;
}
}
