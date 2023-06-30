#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Difference between the ASCII values of the first differing characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare characters until null terminators are reached */
	do {
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	} while (s1[i] != '\0' && s2[i] != '\0');

	return (0);
}
