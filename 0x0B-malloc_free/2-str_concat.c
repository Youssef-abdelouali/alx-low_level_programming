#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string, NULL if fails.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concatenated == NULL)
		return (NULL);

	strcpy(concatenated, s1);
	strcat(concatenated, s2);

	return (concatenated);
}
