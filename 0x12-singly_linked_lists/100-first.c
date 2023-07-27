#include <stdio.h>

/* Function prototype with constructor attribute */
void first(void) __attribute__ ((constructor));

/**
 * first - Prints sentences before main function.
 *
 * Description: A function with constructor
 * attribute to be executed before main.
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
