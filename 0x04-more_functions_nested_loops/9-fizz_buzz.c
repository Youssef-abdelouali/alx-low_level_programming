#include "main.h"
#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100, followed by a new line.
 *        For multiples of three, prints "Fizz" instead of the number.
 *        For multiples of five, prints "Buzz" instead of the number.
 *        For multiples of both three and five, prints "FizzBuzz".
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int number = 1;

	do {
		if (number % 3 == 0 && number % 5 != 0)
		{
			printf("Fizz");
		}
		else if (number % 5 == 0 && number % 3 != 0)
		{
			printf("Buzz");
		}
		else if (number % 3 == 0 && number % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", number);
		}

		if (number != 100)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}

		number++;
	} while (number <= 100);

	return (0);
}
