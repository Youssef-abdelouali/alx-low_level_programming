#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: Number of times the character '\' should be printed.
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int row = 0, column;

		while (row < n)
		{
			column = 0;
			while (column < n)
			{
				if (column == row)
					_putchar('\\');
				else if (column < row)
					_putchar(' ');
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
