#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Input string.
 *
 * Description: This function reverses the characters in the input string.
 *              It swaps the characters from both ends towards the middle
 *              until the entire string is reversed.
 */
void rev_string(char *s)
{
	char rev = s[0]; /* Variable to store temporary character */
	int counter = 0; /* Counter for string length */
	int i;

	/* Calculate the length of the string */
	while (s[counter] != '\0')
		counter++;

	/* Swap characters to reverse the string */
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
