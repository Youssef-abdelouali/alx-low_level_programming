#include "main.h"

/**
 * string_toupper - Converts all lowercase characters to uppercase
 * @n: Pointer to the string
 *
 * Return: Pointer to the modified string (n)
 */
char *string_toupper(char *n)
{
	int i = 0;

	/* Convert lowercase characters to uppercase */
	do {
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	} while (n[i] != '\0');

	return (n);
}
