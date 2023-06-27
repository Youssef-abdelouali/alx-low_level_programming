#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Input string.
 *
 * Description: This function prints every other character of the input string,
 *              starting with the first character.
 */
void puts2(char *str)
{
	int length = 0; /* Length of the string */
	int index; /* Index variable */

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Print every other character starting from the first character */
	for (index = 0; index < length; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}

	_putchar('\n');
}
