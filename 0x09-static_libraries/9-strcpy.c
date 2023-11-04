#include "main.h"

/**
 * _strcpy - Copies the source string to the destination buffer.
 * @dest: Destination buffer.
 * @src: Source string.
 * Return: Pointer to the destination string.
 *
 * Description: This function copies the characters from the source string to
 * the destination buffer until it reaches the null terminator.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0; /* Length of source string */
	int index = 0; /* Index variable */

	/* Calculate the length of the source string */
	while (src[length] != '\0')
		length++;

	/* Copy characters from source to destination */
	while (index < length)
	{
		dest[index] = src[index];
		index++;
	}

	dest[length] = '\0'; /* Append null terminator to destination */

	return (dest);
}
