#include <stdio.h>
#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: String to be converted
 *
 * Return: The integer converted from the string
 */
int _atoi(char *s)
{
	int i, negative, num, len, found_digit, digit;

	i = 0;
	negative = 0;
	num = 0;
	len = 0;
	found_digit = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (i < len && found_digit == 0)
	{
		if (s[i] == '-')
			++negative;

		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (negative % 2)
				digit = -digit;
			num = num * 10 + digit;
			found_digit = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			found_digit = 0;
		}
		i++;
	}

	if (found_digit == 0)
		return (0);

	return (num);
}

/**
 * main - Multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, operand1, operand2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	operand1 = _atoi(argv[1]);
	operand2 = _atoi(argv[2]);
	result = operand1 * operand2;

	printf("%d\n", result);

	return (0);
}
