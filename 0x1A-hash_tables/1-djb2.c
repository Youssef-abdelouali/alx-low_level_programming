#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int ha_sh;
	int x;

	ha_sh = 5381;
	while ((x = *str++))
		ha_sh = ((ha_sh << 5) + ha_sh) + x; /* ha_sh * 33 + x*/

	return (ha_sh);
}
