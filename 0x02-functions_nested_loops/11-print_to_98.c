#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @num: The starting number
 */
void print_to_98(int num)
{
	int current;

	if (num <= 98)
	{
		/* Loop from num to 98 */
		current = num;
		while (current <= 98)
		{
			printf("%d", current);
			if (current != 98)
				printf(", ");
			else
				printf("\n");
			current++;
		}
	}
	else
	{
		/* Loop from num to 98 */
		current = num;
		while (current >= 98)
		{
			printf("%d", current);
			if (current != 98)
				printf(", ");
			else
				printf("\n");
			current--;
		}
	}
}
