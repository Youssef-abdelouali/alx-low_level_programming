# 0x02. C - Functions, nested loops
## Tasks :
0. _putchar 

**Write a program that prints _putchar, followed by a new line.
The program should return 0 :**

```
#include <stdio.h>
#include "main.h"

/**
 * prints _putchar
 *
 * followed by a new line.
 * The program should return 0
 */
int main(void)
{
        char text[] = "_putchar";
        int i = 0;

        while (text[i] != '\0')
        {
                _putchar(text[i]);
                i++;
        }

        _putchar('\n');

        return 0;
}





```

1. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game

**Write a function that prints the alphabet, in lowercase, followed by a new line. :**

```
#include "main.h"

/**
 * print all alphabets in lowercase
 * followed by a new line.
 * 
 */
void print_alphabet(void)
{
    char lower = 'a';

    do {
        _putchar(lower);
        lower++;
    } while (lower <= 'z');

    _putchar('\n');
}



```

# 0x02. C - Functions, nested loops
## Tasks :
2. 10 x alphabet

**Write a function that prints 10 times the alphabet, in lowercase, followed by a new line. :**

```
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase, 
 * use _putchar twice in your code
 * followed by a new line
 */
void print_alphabet_x10(void)
{
    char alpha;
    int i = 0;

    do {
        for (alpha = 'a'; ch <= 'z'; alpha++) {
            _putchar(alpha);
        }
        _putchar('\n');
        i++;
    } while (i < 10);
}


```
3. islower

**Write a function that checks for lowercase character :**

```
#include "main.h"


	/**
	 * Prototype: int _islower(int c);
	 * @c: is the char to be checked
	 * Returns 1 if c is lowercase
     * Returns 0 otherwise
	 */


	int _islower(int c)
	{
		if (c >= 'a' && c <= 'z')
			return (1);
		else
			return (0);
	}



```
4. isalpha

**Write a function that checks for alphabetic character  :**

```
#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * Prototype: int _isalpha(int c);
 * c The character to be checked
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}





```
5. Sign

**Write a function that prints the sign of a number.  :**

```
#include "main.h"

/**
 * Prototype: int print_sign(int n);
 * @n: The number to check
 *
 * 1 and prints '+' if n is greater than zero
 *  0 and prints '0' if n is zero
 * -1 and prints '-' if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}


```
6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you

**Write a function that computes the absolute value of an integer.  :**

```
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: The integer to check
 *
 * Return: The absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}





```
7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important

**Write a function that prints the last digit of a number  :**

```
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to extract the last digit from
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}

```
8. I'm federal agent Jack Bauer, and today is the longest day of my life

**Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59 :**

```
#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer
 *              starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int hour, minute;

	hour = 0;

	do {
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
		hour++;
	} while (hour < 24);
}

```
9. Learn your times table

**Write a function that prints the 9 times table, starting with 0 :**

```
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


```
10. a + b

**Write a function that adds two integers and returns the result :**

```
#include "main.h"

/**
 * add - Adds two integers and returns the result
 * @num1: First integer to be added
 * @num2: Second integer to be added
 *
 * Return: Sum of num1 and num2
 */
int add(int num1, int num2)
{
	int sum;

	/* Calculate the sum of num1 and num2 */
	sum = num1 + num2;

	/* Return the result */
	return sum;
}



```
