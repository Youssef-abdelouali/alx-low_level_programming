#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string to a new memory space location.
 * @str: The string to be duplicated.
 *
 * Return: A pointer to the duplicated string, NULL if fails.
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, length = 0;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}

	/* Allocate memory for the duplicated string */
	duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
		return (NULL);

	/* Copy the string to the new memory space */
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];

	return (duplicate);
}
