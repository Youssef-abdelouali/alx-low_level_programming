#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints the last digit of a random number.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int theLastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	theLastDigit = n % 10;

	if (theLastDigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n",
		       n, theLastDigit);
	}
	else if (theLastDigit < 6 && theLastDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n",
		       n, theLastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n",
		       n, theLastDigit);
	}

	return (0);
}
