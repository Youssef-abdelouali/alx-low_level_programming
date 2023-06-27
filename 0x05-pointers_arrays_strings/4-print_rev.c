#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: Pointer to the string.
 *
 * Description: This function calculates the length of the string,
 *              then prints the characters in reverse order.
 *              After printing the reversed string, it adds a new line.
 */
void print_rev(char *s)
{
	int length = 0; /* Variable for length */

	/* Calculate the length of the string */
	do {
		length++;
	} while (*s++ != '\0');

	s--; /* Move back to the last character */

	/* Print the characters in reverse order */
	while (length > 0)
	{
		_putchar(*s--);
		length--;
	}

	_putchar('\n'); /* Add a new line character */
}
