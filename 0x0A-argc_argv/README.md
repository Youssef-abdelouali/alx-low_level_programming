# 0x0A. C - argc, argv

## Tasks :
0. It ain't what they call you, it's what you answer to


_Write a program that prints its name, followed by a new line._

```sh
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	/* Print the name of the program */
	printf("%s\n", *argv);

	return (0);
}

```

1. Silence is argument carried out by other means


_Write a program that prints the number of arguments passed into it._

```sh
#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Ignore argv */
	printf("%d\n", argc - 1);

	return (0);
}

```

2. The best argument against democracy is a five-minute conversation with the average voter


_Write a program that prints all arguments it receives._

```sh
#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments received by the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

```

3. Neither irony nor sarcasm is argument


_Write a program that multiplies two numbers._

```sh
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

```

4. To infinity and beyond


_Write a program that adds positive numbers._

```sh
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * check_num - Checks if a string consists only of digits
 * @str: The string to check
 *
 * Return: 1 if the string consists only of digits, 0 otherwise
 */
int check_num(char *str)
{
	unsigned int count = 0;

	do
	{
		if (!isdigit(str[count])) /* Check if str contains digits */
			return (0);

		count++;
	} while (count < strlen(str));

	return (1);
}

/**
 * main - Adds up all the valid numbers passed as arguments
 * @argc: The number of arguments
 * @argv: An array of arguments
 *
 * Return: 0 (Success) or 1 (Error)
 */
int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]); /* Convert string to int */
			sum += str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}

		count++;
	}

	printf("%d\n", sum);

	return (0);
}

```

