#include <stdlib.h>
#include "main.h"

/**
 * count_words - Helper function to count the number of words in a string.
 * @s: The string to evaluate.
 *
 * Return: Number of words.
 */
int count_words(char *s)
{
	int flag = 0, count = 0;

	for (; *s != '\0'; s++)
	{
		if (*s == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			count++;
		}
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: Pointer to an array of strings (Success),
 *         or NULL (Error or no words found).
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words = 0, count = 0, start, end;

	/* Calculate the length of the string */
	while (str[len])
		len++;

	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = (char **)malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (count)
			{
				end = i;
				tmp = (char *)malloc(sizeof(char) * (count + 1));
				if (tmp == NULL)
					return (NULL);

				start = i - count;
				while (start < end)
					*tmp++ = str[start++];

				*tmp = '\0';
				matrix[k] = tmp - count;
				k++;
				count = 0;
			}
		}
		else if (count++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
