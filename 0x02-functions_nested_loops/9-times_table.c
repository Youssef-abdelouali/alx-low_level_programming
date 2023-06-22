#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			int result = i * j;

			/* Print the comma and space separator */
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');

				/* Print a leading space if the result is a single digit */
				if (result < 10)
					_putchar(' ');
				else
					_putchar((result / 10) + '0');

				/* Print the second digit of the result */
				_putchar((result % 10) + '0');
			}
			else
			{
				/* Print the first digit of the result (always 0) */
				_putchar('0');
			}
		}
		/* Move to the next line after each row */
		_putchar('\n');
	}
}
