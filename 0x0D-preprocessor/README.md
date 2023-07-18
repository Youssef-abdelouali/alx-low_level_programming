# 0x0D. C - Preprocessor
## Tasks: 

0. Object-like Macro


_Create a header file that defines a macro named SIZE as an abbreviation for the token 1024._

```sh

#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H

#define SIZE 1024

#endif

```

1. Pi

_Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359._

```sh
#ifndef PI_H
#define PI_H

#define PI 3.14159265359

#endif

```

2. File name

_Create a header file that defines a macro named PI as an abbreviation for the token 3.14159265359._

```sh
#include <stdio.h>

/**
 * main - Prints the name of the file
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}


```
3. Function-like macro

_Write a function-like macro ABS(x) that computes the absolute value of a number x._

```sh

#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H

#define ABS(x) ((x) < (0) ? -(x) : (x))

#endif

```
4. SUM

_Write a function-like macro SUM(x, y) that computes the sum of the numbers x and y._

```sh

#ifndef SUM_H
#define SUM_H

#define SUM(x, y) ((x) + (y))

#endif


```

