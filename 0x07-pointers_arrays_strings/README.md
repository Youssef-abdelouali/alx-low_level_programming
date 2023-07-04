# 0x07. C - Even more pointers, arrays and strings
## _Tasks :_
0. memset

_Write a function that fills memory with a constant byte._

```sh
#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the starting address of the memory to be filled.
 * @b: The desired value to fill the memory with.
 * @n: Number of bytes to be changed.
 *
 * Return: Pointer to the modified array with the new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
```
1. memcpy

_Write a function that copies memory area._

```sh
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

```

