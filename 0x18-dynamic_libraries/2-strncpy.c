#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	/* Copy at most n characters from src to dest */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	/* Fill any remaining space in dest with null characters */
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
