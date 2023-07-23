#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: Number of bytes to allocate.
 *
 * Return: A pointer to the allocated memory.
 *         Exits with status 98 on malloc failure.
 */
void *malloc_checked(unsigned int b)
{
	void *mem_ptr;

	mem_ptr = malloc(b);

	if (mem_ptr == NULL)
		exit(98);

	return (mem_ptr);
}
