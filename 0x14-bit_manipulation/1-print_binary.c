#include "main.h"

/**
 * _pow - Calculates the result of raising a base to a power.
 * @base: The base value.
 * @power: The power value.
 *
 * Return: The result of (base ^ power).
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
unsigned long int result = 1;
unsigned int i;

for (i = 0; i < power; i++)
{
result *= base;
}

return (result);
}

/**
 * print_binary - Prints a number in binary notation.
 * @n: The number to print in binary.
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
unsigned long int divisor, check;
char flag = 0;

divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);

for (; divisor != 0; divisor >>= 1)
{
check = n & divisor;
if (check == divisor)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || divisor == 1)
{
_putchar('0');
}
}
}

