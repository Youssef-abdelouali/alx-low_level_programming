#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Input string.
 *
 * Description: This function prints the second half of the input string.
 *              If the length of the string is odd, it prints the latter half
 *              starting from the middle character.
 */
void puts_half(char *str)
{
	int index = 0; /* Index variable */
	int length = 0; /* Length of the string */

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the starting index for printing the second half */
	if (length % 2 == 0)
		index = length / 2;
	else
		index = (length + 1) / 2;

	/* Print the second half of the string */
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}
