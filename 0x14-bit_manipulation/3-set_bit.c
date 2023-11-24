#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number to set the bit in.
 * @index: The index at which to set the bit.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int setBitMask;

/* Check if the index is within the valid range */
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

/* Create a bitmask with a 1 at the specified index */
setBitMask = 1 << index;

/* Use bitwise OR to set the bit at the index to 1 */
*n = *n | setBitMask;

return (1);
}

