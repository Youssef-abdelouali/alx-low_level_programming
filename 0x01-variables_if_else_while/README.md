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

}
```
2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

*a program that prints the alphabet in lowercase, followed by a new line :*

```
#include <stdio.h>

/**
 * the main function prints the alphabet in lowercase,
 * Return: Always 0 (Success)
 */
int main(void)
{
	char  lowercase;

	for ( lowercase = 'a';  lowercase <= 'z';  lowercase++)
	{
		putchar(lowercase);
	}
	putchar('\n');
	return (0);
}
```
3. alphABET 

*a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line :*
```
#include <stdio.h>

/**
 * the main function prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int lower;
	int upper;

	for (lower = 'a'; lower <= 'z'; lower++)
		putchar(lower);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	putchar('\n');
	return (0);
}
```
4. When I was having that alphabet soup, I never thought that it would pay off

*a program that prints the alphabet in lowercase, followed by a new line Print all the letters except q and e
 :*

```
#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase,
 * followed by a new line, except 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char skip;

    for (skip = 'a'; skip <= 'z'; skip++)
    {
        if (skip != 'e' && skip != 'q')
        {
            putchar(skip);
        }
    }

    putchar('\n');

    return 0;
}
```
5. Numbers

*a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
All your code should be in the main function
 :*

```
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    do {
        printf("%d", digit);
        digit++;
    } while (digit < 10);

    printf("\n");

    return 0;
}

```
6. Numberz

*a program that prints all single digit numbers of base 10 starting from 0, followed by a new line :*
```
#include <stdio.h>

/**
 * prints all single digit numbers of base 10 starting from 0,
 * followed by a new line, using putchar
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit = 48 ;

	while (digit < 58)
	{
		putchar(digit);
		digit++;
	}
	putchar('\n');
	return (0);
}
```
