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

