#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	/* Reverse the elements in the array */
	do {
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	} while (i < n);
}
