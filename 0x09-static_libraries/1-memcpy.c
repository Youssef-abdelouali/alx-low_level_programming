#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Pointer to the memory where the data is to be copied.
 * @src: Pointer to the memory to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory with the copied data.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
