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
