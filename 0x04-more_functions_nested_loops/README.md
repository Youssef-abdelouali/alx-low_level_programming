# 0x04. C - More functions, more nested loops
## Description :

***"0x04. C - More functions, more nested loops" is a section in a C programming course that focuses on expanding your knowledge of functions and introducing the concept of nested loops.***

### Tasks :

 0. isupper :

```
#include "main.h"

/**
 * function that checks for uppercase character
 * 
 *Returns 1 if c is uppercase
 * 
 *Returns 0 otherwise
 * 
 * 
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

```


1. isdigit :

```
#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @c: char to be checked
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
    while (c >= '0' && c <= '9')
    {
        return 1;
    }
    return 0;
}
```

