#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible combinations of single-digit numbers,
 *              separated by commas and spaces, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int sindig = 48;

	do {
		putchar(sindig);
		if (sindig != 57)
		{
			putchar(',');
			putchar(' ');
		}
		sindig++;
	} while (sindig < 58);

	putchar('\n');
	return (0);
}
