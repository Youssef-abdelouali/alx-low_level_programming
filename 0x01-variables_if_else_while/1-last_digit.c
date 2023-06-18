#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * the main function print the last digit of a random number 
 * Return: Always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
    int The_last_digit = n % 10;
    
	if (The_last_digit > 5)
	{
		printf("The Last digit of %d is %d and is greater than 5\n",
			n, The_last_digit);
	}
	else if ( The_last_digit < 6 && The_last_digit != 0)
	{
		printf("The Last digit of %d is %d and is less than 6 and not 0\n",
			n, The_last_digit);
	}
	else
	{
		printf("The Last digit of %d is %d and is 0\n",
			n, The_last_digit);
	}

	return (0);

}
