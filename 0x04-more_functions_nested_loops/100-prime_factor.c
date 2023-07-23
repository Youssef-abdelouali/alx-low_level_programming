#include "main.h"

/**
 * print_triangle - Prints a triangle, followed by a new line.
 * @size: Size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row, space, hash;

		row = 1;

		do {
			space = size - row;

			do {
				_putchar(' ');
				space--;
			} while (space > 0);

			hash = 1;

			do {
				_putchar('#');
				hash++;
			} while (hash <= row);

			_putchar('\n');
			row++;
		} while (row <= size);
	}
}
