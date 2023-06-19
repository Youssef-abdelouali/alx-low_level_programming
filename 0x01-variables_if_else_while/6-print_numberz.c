#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all single-digit numbers of base 10 starting from 0,
 *              followed by a new line, using putchar.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48;

	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}

	putchar('\n');
	return (0);
}
