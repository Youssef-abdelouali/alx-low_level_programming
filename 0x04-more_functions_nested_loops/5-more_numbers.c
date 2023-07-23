#include "main.h"

/**
 * more_numbers - Prints more numbers.
 */
void more_numbers(void)
{
	int row, column;

	for (row = 1; row <= 10; row++)
	{
		for (column = 0; column <= 14; column++)
		{
			if (column >= 10)
				_putchar('1');
			_putchar(column % 10 + '0');
		}
		_putchar('\n');
	}
}
