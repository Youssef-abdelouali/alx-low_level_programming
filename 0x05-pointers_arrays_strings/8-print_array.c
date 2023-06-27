#include "main.h"

/**
 * print_array - Prints n elements of an array.
 * @a: Array name.
 * @n: Number of elements to be printed.
 *
 * Description: This function prints the first n elements of the input array.
 *              The elements are separated by commas.
 */
void print_array(int *a, int n)
{
	int i = 0; /* Index variable */

	/* Print the elements of the array */
	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}

	/* Print the last element without a comma */
	if (i == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}
