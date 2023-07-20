# 0x0F. C - Function pointers
## Tasks: 

0. What's my name


_Write a function that prints a name._

```sh
#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name using a function pointer.
 * @name: The string to print.
 * @f: A pointer to the function responsible for printing the name.
 *
 * Return: Nothing.
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

```
