# 0x06. C - More pointers, arrays and strings

## Tasks : 
0. strcat



_Write a function that concatenates two strings._

```sh
/**
 * _strcat - Combines two strings
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the concatenated string (dest)
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Iterate through dest to find the end of the string */
	for (i = 0; dest[i] != '\0'; i++)
	{
		/* Continue searching for null terminator position */
	}

	/* Concatenate src to dest */
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* Append null terminator to complete the concatenated string */
	dest[i + j] = '\0';

	return (dest);
}

```
1. strncat



_Write a function that concatenates two strings._

```sh
/**
 * _strncat - Concatenates two strings, using at most n bytes from src
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of bytes to concatenate from src
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the null-terminator position in dest */
	for (i = 0; dest[i] != '\0'; i++)
	{
		/* Continue searching for null terminator position */
	}

	/* Concatenate at most n bytes from src to dest */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	/* Add null terminator to the end of the concatenated string */
	dest[i + j] = '\0';

	return (dest);
}
```

2. strncpy



_Write a function that copies a string._

```sh
#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the resulting string (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	/* Copy at most n characters from src to dest */
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	/* Fill any remaining space in dest with null characters */
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}

	return (dest);
}
```
3. strcmp



_Write a function that compares two strings.._

```sh
#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: Pointer to the first string
 * @s2: Pointer to the second string
 *
 * Return: Difference between the ASCII values of the first differing characters
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	/* Compare characters until null terminators are reached */
	do {
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	} while (s1[i] != '\0' && s2[i] != '\0');

	return (0);
}

```

4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy



_Write a function that reverses the content of an array of integers._

```sh
#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int temp;

	/* Reverse the elements in the array */
	do {
		temp = a[i];
		a[i] = a[n - 1];
		a[n - 1] = temp;
		i++;
		n--;
	} while (i < n);
}

```

5. Always look up


_Write a function that changes all lowercase letters of a string to uppercase._

```sh
#include "main.h"

/**
 * string_toupper - Converts all lowercase characters to uppercase
 * @n: Pointer to the string
 *
 * Return: Pointer to the modified string (n)
 */
char *string_toupper(char *n)
{
	int i = 0;

	/* Convert lowercase characters to uppercase */
	do {
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - 32;
		}
		i++;
	} while (n[i] != '\0');

	return (n);
}

```

6. Expect the best. Prepare for the worst. Capitalize on what comes


_Write a function that capitalizes all words of a string._

```sh
#include "main.h"

/**
 * cap_string - Capitalizes the first letter of each word in a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
	int index = 0;

	/* Capitalize the first letter of each word */
	do {
		/* Find the next lowercase letter */
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;

		/* Capitalize the letter if it's the first letter of a word */
		if (str[index - 1] == ' ' || str[index - 1] == '\t' || str[index - 1] == '\n' ||
		    str[index - 1] == ',' || str[index - 1] == ';' || str[index - 1] == '.' ||
		    str[index - 1] == '!' || str[index - 1] == '?' || str[index - 1] == '"' ||
		    str[index - 1] == '(' || str[index - 1] == ')' || str[index - 1] == '{' ||
		    str[index - 1] == '}' || index == 0)
		{
			str[index] -= 32; /* Convert lowercase to uppercase */
		}

		index++;
	} while (str[index]);

	return (str);
}

```

7. Mozart composed his music not for the elite, but for everybody

_Write a function that encodes a string into 1337._

```sh
 #include "main.h"

/**
 * leet - Encodes a string into 1337speak.
 * @n: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (n);
}

```

7. Mozart composed his music not for the elite, but for everybody

_Write a function that encodes a string into 1337._

```sh
#include "main.h"

/**
 * leet - Encodes a string into 1337speak.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char leet_chars[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_nums[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}

```


