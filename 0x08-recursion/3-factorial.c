#include "main.h"

/**
 * factorial - Computes the factorial of a number using recursion.
 * @n: Number to compute the factorial for.
 *
 * Return: Factorial of n, or -1 if n is negative.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
