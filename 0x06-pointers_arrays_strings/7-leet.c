#include "main.h"

/**
 * leet - Encodes a string into 1337speak.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
