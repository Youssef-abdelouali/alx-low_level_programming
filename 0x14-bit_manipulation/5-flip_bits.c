#include "main.h"

/**
 * flip_bits - Counts the number of bits to change
 *              to get from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits to change.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int bitIndex = 63;  /* Start from the highest bit */
unsigned int countBits = 0;
unsigned long int exclusive = n ^ m;

/* Iterate through each bit using a while loop */
while (bitIndex >= 0)
{
unsigned long int current = exclusive >> bitIndex;

/* Check if the least significant bit is set */
if (current & 1)
countBits++;

/* Move to the next bit towards the least significant end */
bitIndex--;
}

return (countBits);
}

