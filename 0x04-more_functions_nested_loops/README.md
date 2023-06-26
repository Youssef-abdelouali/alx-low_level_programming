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



