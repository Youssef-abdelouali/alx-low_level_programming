#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diag_sum1, diag_sum2, y;

	diag_sum1 = 0;
	diag_sum2 = 0;

	for (y = 0; y < size; y++)
	{
		diag_sum1 = diag_sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		diag_sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", diag_sum1, diag_sum2);
}
