# 0x01. C - Variables, if, else, while.
## Tasks : 
0. Positive anything is better than negative nothing :

*This program will assign a random number to the variable n each time it is executed :*
  - The output of the program should be:
The number, followed by :
     - if the number is greater than 0: is positive
     - if the number is 0: is zero
     - if the number is less than 0: is negative
     - followed by a new line
```#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else if  (n == 0)
{
printf("%d is zero\n", n);
}
return (0);
}
```
1. The last digit

*This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.:*
  - The output of the program should be:

    - The string Last digit of, followed by
    - n, followed by
    - the string is, followed by
    - if the last digit of n is greater than 5: the string and is greater than 5
    - if the last digit of n is 0: the string and is 0
    - if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
    - followed by a new line
```#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * the main function print the last digit of a random number 
 * Return: Always 0.
 */
int main(void)
{
	int n;
        int theLastDigit

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
        theLastDigit  = n % 10;
    
	if (theLastDigit > 5)
	{
		printf("The Last digit of %d is %d and is greater than 5\n",
			n, The_last_digit);
	}
	else if ( theLastDigit < 6 && theLastDigit != 0)
	{
		printf("The Last digit of %d is %d and is less than 6 and not 0\n",
			n, theLastDigit);
	}
	else
	{
		printf("The Last digit of %d is %d and is 0\n",
			n, theLastDigit);
	}

	return (0);

}```
