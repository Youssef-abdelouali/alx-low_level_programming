#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The integer to check
 *
 * Return: 1 and prints '+' if n is greater than zero
 *         0 and prints '0' if n is zero
 *        -1 and prints '-' if n is less than zero
 */
int print_sign(int n)
{
	char sign;

	switch (n)
	{
	case 0:
		sign = '0';
		break;
	case 1:
		sign = '+';
		break;
	default:
		sign = '-';
		break;
	}

	_putchar(sign);
	return (n >= 0 ? (n > 0 ? 1 : 0) : -1);
}
