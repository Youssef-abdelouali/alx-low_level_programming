#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0; /* Variable to store the length of the string */
	int i;

	while (*s != '\0')
	{
		length++; /* Increment length for each character */
		s++; /* Move to the next character */
	}

	s--; /* Move back to the last character before the null terminator */

	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
