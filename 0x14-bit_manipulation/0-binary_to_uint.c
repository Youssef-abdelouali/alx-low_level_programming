#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointer to a string containing a binary number.
 *
 * Return: Unsigned int with the decimal value of the binary number,
 *         or 0 if there's an error.
 */
unsigned int binary_to_uint(const char *b)
{
int index;
unsigned int result;

result = 0;

/* Check if the input string is not NULL */
if (!b)
return (0);

/* Validate that the string contains only '0' or '1' characters */
index = 0;
while (b[index] != '\0')
{
if (b[index] != '0' && b[index] != '1')
return (0);
index++;
}

index = 0;
while (b[index] != '\0')
{
result <<= 1;
if (b[index] == '1')
result += 1;
index++;
}
return (result);
}

