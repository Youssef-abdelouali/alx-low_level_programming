# 0x12. C - Singly linked lists

## Tasks :

0. Print list


_Write a function that prints all the elements of a list_t list._

```sh
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a linked list.
 * @h: Pointer to the list_t list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t nodes_printed = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		nodes_printed++;
	}

	return (nodes_printed);
}
```

1. List length

_Write a function that returns the number of elements in a linked list_t list._

```sh
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all elements of a linked list.
 * @h: Pointer to the list_t list to print.
 *
 * Return: The number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
```

2. Add node

_Write a function that adds a new node at the beginning of a list_t list._

```sh
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: New string to add in the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
```

3. Add node at the end

_Write a function that adds a new node at the end of a list_t list._

```sh
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: String to put in the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int str_len = 0;

	while (str[str_len])
		str_len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = str_len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
```

4. Free list

_Write a function that frees a list_t list._

```sh
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: The list_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

```
5. The Hare and the Tortoise

_Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed._

```sh
#include <stdio.h>

/* Function prototype with constructor attribute */
void first(void) __attribute__ ((constructor));

/**
 * first - Prints sentences before main function.
 *
 * Description: A function with constructor attribute to be executed before main.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

```

6. Real programmers can write assembly code in any language

_Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line._

```sh


```
