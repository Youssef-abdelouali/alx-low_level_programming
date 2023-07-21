#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array and assigns char c to each element.
 * @size: The size of the array.
 * @c: The character to assign.
 *
 * Return: Pointer to the array, NULL if fails.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	/* Check for valid size and allocation */
	if (size == 0 || str == NULL)
		return (NULL);

	/* Assign char c to each element */
	i = 0;
	do {
		str[i] = c;
		i++;
	} while (i < size);

	return (str);
}
