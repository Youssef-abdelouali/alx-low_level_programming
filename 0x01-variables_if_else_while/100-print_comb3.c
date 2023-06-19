#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of two digits,
 *              separated by commas and spaces, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 49;

	while (i <= 56)
	{
		while (j <= 57)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
		j = i + 1;
	}

	putchar('\n');
	return (0);
}
