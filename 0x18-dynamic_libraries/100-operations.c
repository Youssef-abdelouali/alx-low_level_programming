#include <stdio.h>

/**
 * * add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The result of subtraction (a - b)
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of the two integers
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two integers
 * @a: The dividend
 * @b: The divisor (non-zero)
 *
 * Return: The result of division (a / b)
 */
int div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		/* Handle division by zero */
		return (0);
	}
}

/**
 * mod - Computes the modulo of two integers
 * @a: The dividend
 * @b: The divisor (non-zero)
 *
 * Return: The result of modulo operation (a % b)
 */
int mod(int a, int b)
{
	if (b != 0)
		return (a % b);
	else
	{
		/* Handle modulo by zero */
		return (0);
	}
}
