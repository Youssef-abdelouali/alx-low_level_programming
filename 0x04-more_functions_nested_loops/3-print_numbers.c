#include "main.h"

/**
 * print_numbers - Prints numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char c = '0';

	do {
		/* Print the current number */
		_putchar(c);

		/* Increment the number */
		c++;
	} while (c <= '9');

	/* Print a new line */
	_putchar('\n');
}
