#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line, except 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char skip;

	for (skip = 'a'; skip <= 'z'; skip++)
	{
		if (skip != 'e' && skip != 'q')
		{
			putchar(skip);
		}
	}

	putchar('\n');

	return (0);
}
