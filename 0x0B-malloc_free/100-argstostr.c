#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The number of arguments.
 * @av: The array of arguments.
 *
 * Return: A pointer to the concatenated string, NULL if fails.
 */
char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}

	l += ac; /* Add space for newlines between arguments */

	str = malloc(sizeof(char) * (l + 1)); /* Allocate memory */

	if (str == NULL)
		return (NULL);

	/* Concatenate the arguments with newlines */
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		str[r] = '\n'; /* Add a newline after each argument */
		r++;
	}
	str[r] = '\0'; /* Null-terminate the string */

	return (str);
}
