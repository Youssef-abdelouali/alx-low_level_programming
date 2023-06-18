#include <stdio.h>

/**
 * the main function prints the alphabet in lowercase,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char  lowercase;

	for ( lowercase = 'a';  lowercase <= 'z';  lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
