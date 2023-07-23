#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: Integer to be printed.
 */
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	while (n1 / 10)
	{
		print_number(n1 / 10);
		n1 %= 10;
	}

	_putchar(n1 + '0');
}
