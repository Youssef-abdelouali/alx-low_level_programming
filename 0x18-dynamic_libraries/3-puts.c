#include "main.h"

/**
 * _puts - Prints a string followed by a new line.
 * @str: Pointer to the string.
 *
 * Description: This function prints each character of the string
 *              until it reaches the null terminator.
 *              It adds a new line character after printing the string.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
