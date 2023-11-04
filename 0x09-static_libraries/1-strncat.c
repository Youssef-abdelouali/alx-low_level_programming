#include "main.h"

/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the null-terminator position in dest */
	for (i = 0; dest[i] != '\0'; i++)
	{
		/* Continue searching for null terminator position */
	}

	/* Concatenate at most n bytes from src to dest */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* Add null terminator to the end of the concatenated string */
	dest[i + j] = '\0';

	return (dest);
}
