#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: Pointer to the list_t list to be freed.
 *
 * Description: This function frees the memory
 * occupied by each node of the
 * linked list and the strings stored in each node.
 */
void free_list(list_t *head)
{
	list_t *temp;

	do {
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	} while (head);
}
