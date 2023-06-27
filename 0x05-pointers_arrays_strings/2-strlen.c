#include "main.h"

/**
 * _strlen - Calculates string length.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int length = 0; /* Variable for length */

	do {
		length++; /* Increment length */
	} while (*s++ != '\0'); /* Iterate until null terminator is reached */

	return (length); /* Return the length */
}
