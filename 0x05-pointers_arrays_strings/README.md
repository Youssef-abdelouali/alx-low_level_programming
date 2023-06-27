# 0x05. C - Pointers, arrays and strings

## _Tasks :_

0. 98 Battery st

_Write a function that takes a pointer to an int as parameter and updates the value it points to to 98._


```sh
#include "main.h"

/**
 * reset_to_98 - Updates the value pointed to by an integer pointer to 98.
 * @n: Pointer to an integer.
 *
 * Return: void.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

```
1. Don't swap horses in crossing a stream

_Write a function that swaps the values of two integers._


```sh
#include "main.h"

/**
 * swap_int - Swaps two integers.
 * @a: Pointer to the first integer.
 * @b: Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int temp;  /* Temporary variable for swapping */

	temp = *a; /* Swap values: store first integer */
	*a = *b;   /* Assign second integer to first */
	*b = temp; /* Assign stored value to second */
}


```
2. This report, by its very length, defends itself against the risk of being read

_Write a function that returns the length of a string._


```sh
#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0; /* Variable to store the length of the string */

	while (*s != '\0')
	{
		length++; /* Increment length for each character */
		s++; /* Move to the next character */
	}

	return (length);
}




```
3. I do not fear computers. I fear the lack of them

_Write a function that prints a string, followed by a new line, to stdout._


```sh
#include "main.h"

/**
 * _puts - Prints a string followed by a new line to stdout.
 * @str: Pointer to the string.
 *
 * Description: This function iterates through the characters of the string
 *              until it reaches the null terminator, and prints each character.
 *              After printing the entire string, it adds a new line character.
 */
void _puts(char *str)
{
	int i; /* Loop counter variable */

	for (i = 0; str[i] != '\0'; i++) /* Loop until null terminator is encountered */
	{
		_putchar(str[i]); /* Print current character */
	}

	_putchar('\n'); /* Add a new line character after printing the string */
}




```
4. I can only go one way. I've not got a reverse gear

_Write a function that prints a string, in reverse, followed by a new line._


```sh
#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed in reverse.
 */
void print_rev(char *s)
{
	int length = 0; /* Variable to store the length of the string */
	int i;

	while (*s != '\0')
	{
		length++; /* Increment length for each character */
		s++; /* Move to the next character */
	}

	s--; /* Move back to the last character before the null terminator */

	for (i = length; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}



```
5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

_Write a function that reverses a string.._


```sh
#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: Input string.
 *
 * Description: This function reverses the characters in the input string.
 *              It swaps the characters from both ends towards the middle
 *              until the entire string is reversed.
 */
void rev_string(char *s)
{
	char rev = s[0]; /* Variable to store temporary character */
	int counter = 0; /* Counter for string length */
	int i;

	/* Calculate the length of the string */
	while (s[counter] != '\0')
		counter++;

	/* Swap characters to reverse the string */
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}






```
6. Half the lies they tell about me aren't true


_Write a function that prints every other character of a string, starting with the first character, followed by a new line._


```sh
#include "main.h"

/**
 * puts2 - Prints every other character of a string.
 * @str: Input string.
 *
 * Description: This function prints every other character of the input string,
 *              starting with the first character.
 */
void puts2(char *str)
{
	int length = 0; /* Length of the string */
	int index; /* Index variable */

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Print every other character starting from the first character */
	for (index = 0; index < length; index++)
	{
		if (index % 2 == 0)
			_putchar(str[index]);
	}

	_putchar('\n');
}
```
7. Winning is only half of it. Having fun is the other half

_Write a function that prints half of a string, followed by a new line._


```sh
#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: Input string.
 *
 * Description: This function prints the second half of the input string.
 *              If the length of the string is odd, it prints the latter half
 *              starting from the middle character.
 */
void puts_half(char *str)
{
	int index = 0; /* Index variable */
	int length = 0; /* Length of the string */

	/* Calculate the length of the string */
	while (str[length] != '\0')
		length++;

	/* Calculate the starting index for printing the second half */
	if (length % 2 == 0)
		index = length / 2;
	else
		index = (length + 1) / 2;

	/* Print the second half of the string */
	while (str[index] != '\0')
	{
		_putchar(str[index]);
		index++;
	}

	_putchar('\n');
}


```
8. Arrays are not pointers

_Write a function that prints n elements of an array of integers, followed by a new line._


```sh
#include "main.h"

/**
 * print_array - Prints n elements of an array.
 * @a: Array name.
 * @n: Number of elements to be printed.
 *
 * Description: This function prints the first n elements of the input array.
 *              The elements are separated by commas and followed by a new line.
 */
void print_array(int *a, int n)
{
	int i = 0; /* Index variable */

	/* Print the elements of the array */
	while (i < (n - 1))
	{
		printf("%d, ", a[i]);
		i++;
	}

	/* Print the last element without a comma */
	if (i == (n - 1))
		printf("%d", a[n - 1]);

	printf("\n");
}

```
9. strcpy

_rite a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.Return value: the pointer to dest._


```sh
#include "main.h"

/**
 * _strcpy - Copies the source string to the destination buffer.
 * @dest: Destination buffer.
 * @src: Source string.
 * Return: Pointer to the destination string.
 *
 * Description: This function copies the characters from the source string to
 * the destination buffer until it reaches the null terminator.
 */
char *_strcpy(char *dest, char *src)
{
	int length = 0; /* Length of source string */
	int index = 0; /* Index variable */

	/* Calculate the length of the source string */
	while (src[length] != '\0')
		length++;

	/* Copy characters from source to destination */
	while (index < length)
	{
		dest[index] = src[index];
		index++;
	}

	dest[length] = '\0'; /* Append null terminator to destination */

	return (dest);
}


```

