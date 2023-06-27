#include "main.h"

/**
 * swap_int - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp;  /* Temporary variable for swapping */

	temp = *a; /* Swap values: store first integer */
	*a = *b;   /* Assign second integer to first */
	*b = temp; /* Assign stored value to second */
}
