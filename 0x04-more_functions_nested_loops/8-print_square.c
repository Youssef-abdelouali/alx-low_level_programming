#include "main.h"

/**
 * print_square - Prints a square, followed by a new line.
 * @size: Size of the square.
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row = 0, column;

		do {
			column = 0;
			do {
				_putchar('#');
				column++;
			} while (column < size);
			_putchar('\n');
			row++;
		} while (row < size);
	}
}
