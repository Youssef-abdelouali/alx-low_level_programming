# 0x08. C - Recursion
## Tasks :

0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget

_Write a function that prints a string, followed by a new line._

```sh
#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 * @s: Pointer to the string to be printed.
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}

```

1. Why is it so important to dream? Because, in my dreams we are together

_Write a function that prints a string in reverse._

```sh
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion.
 * @s: Pointer to the string to be printed in reverse.
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

```

2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange

_Write a function that returns the length of a string._

```sh
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: Pointer to the string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}

```

3. You mustn't be afraid to dream a little bigger, darling

_Write a function that returns the factorial of a given number._

```sh
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

```

4. Once an idea has taken hold of the brain it's almost impossible to eradicate

_Write a function that returns the value of x raised to the power of y._

```sh
#include "main.h"

/**
 * _pow_recursion - Calculates the value of x raised to the power of y using recursion.
 * @x: The base value.
 * @y: The exponent value.
 *
 * Return: The result of x raised to the power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

```

5. Your subconscious is looking for the dreamer

_Write a function that returns the natural square root of a number._

```sh
#include "main.h"

int actual_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: Number to calculate the square root of.
 *
 * Return: The resulting square root, or -1 if the number does not have
 *         a natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - Recursively finds the natural square root of a number.
 * @n: Number to calculate the square root of.
 * @i: Iterator.
 *
 * Return: The resulting square root, or -1 if the number does not have
 *         a natural square root.
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (actual_sqrt_recursion(n, i + 1));
}

```

6. Inception. Is it possible?
7. 
_Write a function that returns 1 if the input integer is a prime number, otherwise return 0._

```sh
#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - Checks if an integer is a prime number.
 * @n: Number to evaluate.
 *
 * Return: 1 if n is a prime number, 0 if not.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - Recursively determines if a number is prime.
 * @n: Number to evaluate.
 * @i: Iterator.
 *
 * Return: 1 if n is prime, 0 if not.
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);

	if (n % i == 0 && i > 0)
		return (0);

	return (actual_prime(n, i - 1));
}

```

