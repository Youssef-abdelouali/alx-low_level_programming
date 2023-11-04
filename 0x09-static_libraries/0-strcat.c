#include "main.h"

/**
 * _strcat - Combines two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Iterate through dest to find the end of the string */
	for (i = 0; dest[i] != '\0'; i++)
	{
		/* Continue searching for null terminator position */
	}

	/* Concatenate src to dest */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* Append null terminator to complete the concatenated string */
	dest[i + j] = '\0';

	return (dest);
}
