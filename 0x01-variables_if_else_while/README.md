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
