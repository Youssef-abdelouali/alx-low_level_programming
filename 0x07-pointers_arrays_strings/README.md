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
