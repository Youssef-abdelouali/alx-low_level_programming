# 0x07. C - Even more pointers, arrays and strings
## _Tasks :_
0. memset

_Write a function that fills memory with a constant byte._

```sh
#include "main.h"

/**
 * _memset - Fills a block of memory with a specific value.
 * @s: Pointer to the starting address of the memory to be filled.
 * @b: The desired value to fill the memory with.
 * @n: Number of bytes to be changed.
 *
 * Return: Pointer to the modified array with the new value for n bytes.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
```
1. memcpy

_Write a function that copies memory area._

```sh
#include "main.h"

/**
 * _memcpy - Copies a memory area.
 * @dest: Pointer to the memory where the data is to be copied.
 * @src: Pointer to the memory to be copied.
 * @n: Number of bytes to be copied.
 *
 * Return: Pointer to the destination memory with the copied data.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}

```
2. strchr

_Write a function that locates a character in a string.._

```sh
#include "main.h"

/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string to be searched.
 * @c: Character to be located.
 *
 * Return: 0 if the character is not found, otherwise a pointer to the first
 *         occurrence of the character in the string.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (&s[i]);

		i++;
	}

	return (0);
}

```
3. strspn

_Write a function that gets the length of a prefix substring._

```sh
#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the characters to match.
 *
 * Return: The number of bytes in the initial segment of s which consist
 *         only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}

	return (n);
}

```
4. strpbrk

_Write a function that searches a string for any of a set of bytes._

```sh
#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: Pointer to the string to be searched.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the first occurrence in s of any byte from accept,
 *         or NULL if no match is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int idx;

	while (*s)
	{
		for (idx = 0; accept[idx]; idx++)
		{
			if (*s == accept[idx])
				return (s);
		}

		s++;
	}

	return ('\0');
}

```
5. strstr

_Write a function that locates a substring._

```sh
#include "main.h"

/**
 * _strstr - Locates a substring within a string.
 * @haystack: Pointer to the string to be searched.
 * @needle: Pointer to the substring to search for.
 *
 * Return: Pointer to the beginning of the located substring, or NULL if the
 *         substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

```
6. Chess is mental torture

_Write a function that prints the chessboard._

```sh
#include "main.h"

/**
 * print_chessboard - Prints the chessboard.
 * @a: 2D array representing the chessboard.
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(a[i][j]);

		_putchar('\n');
	}
}

```
7. The line of life is a ragged diagonal between duty and desire

_Write a function that prints the sum of the two diagonals of a square matrix of integers._

```sh
#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sums of the diagonals of a square matrix.
 * @a: Pointer to the square matrix.
 * @size: Size of the square matrix.
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int diag_sum1, diag_sum2, y;

	diag_sum1 = 0;
	diag_sum2 = 0;

	for (y = 0; y < size; y++)
	{
		diag_sum1 = diag_sum1 + a[y * size + y];
	}

	for (y = size - 1; y >= 0; y--)
	{
		diag_sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", diag_sum1, diag_sum2);
}


```
8. Double pointer, double fun

_Write a function that sets the value of a pointer to a char._

```sh
#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to be modified.
 * @to: Pointer to char to set the pointer value to.
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

```

