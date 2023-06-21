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


