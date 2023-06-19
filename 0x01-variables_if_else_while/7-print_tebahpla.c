#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the lowercase alphabet in reverse,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'z';

	do {
		putchar(lowercase);
		lowercase--;
	} while (lowercase >= 'a');

	putchar('\n');
	return (0);
}
