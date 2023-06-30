#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index = 0;

	/* Capitalize the first letter of each word */
	do {
		/* Find the next lowercase letter */
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		/* Capitalize the letter if it's the first letter of a word */
		if (str[index - 1] == ' ' || str[index - 1] == '\t' ||
		    str[index - 1] == '\n' || str[index - 1] == ',' ||
		    str[index - 1] == ';' || str[index - 1] == '.' ||
		    str[index - 1] == '!' || str[index - 1] == '?' ||
		    str[index - 1] == '"' || str[index - 1] == '(' ||
		    str[index - 1] == ')' || str[index - 1] == '{' ||
		    str[index - 1] == '}')
		{
			str[index] -= 32; /* Convert lowercase to uppercase */
		}

		index++;
	} while (str[index]);

	return (str);
}
