#include "main.h"

/**
 * get_bit - Retrieves the value of a bit at a given index.
 * @n: The number to check bits in.
 * @index: The index at which to check the bit.
 *
 * Return: The value of the bit at the specified index,
 *         or -1 if there is an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int divisor, check;

/* Check if the index is within the valid range */
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

/* Create a divisor with a 1 at the specified index */
divisor = 1 << index;

/* Use bitwise AND to check the value of the bit at the index */
check = n & divisor;

/* If the check result is equal to the divisor, the bit is set to 1 */
if (check == divisor)
return (1);

/* If the check result is not equal to the divisor, the bit is set to 0 */
return (0);
}

