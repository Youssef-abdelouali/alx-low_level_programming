#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: String to be converted.
 *
 * Return: The integer converted from the string.
 */
int _atoi(char *s)
{
	int index, sign, result, length, found, digit;

	index = 0;
	sign = 0;
	result = 0;
	length = 0;
	found = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;

	while (index < length && found == 0)
	{
		if (s[index] == '-')
			sign++;

		if (s[index] >= '0' && s[index] <= '9')
		{
			digit = s[index] - '0';
			if (sign % 2)
				digit = -digit;
			result = result * 10 + digit;
			found = 1;
			if (s[index + 1] < '0' || s[index + 1] > '9')
				break;
			found = 0;
		}
		index++;
	}

	if (found == 0)
		return (0);

	return (result);
}
