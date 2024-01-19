#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0; /* Variable to store the length of the string */

	while (*s != '\0')
	{
		length++; /* Increment length for each character */
		s++; /* Move to the next character */
	}

	return (length);
}
