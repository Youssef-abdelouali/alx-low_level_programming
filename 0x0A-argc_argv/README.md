# 0x0A. C - argc, argv

## Tasks :
0. It ain't what they call you, it's what you answer to


_Write a program that prints its name, followed by a new line._

```sh
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of command-line arguments
 * @argv: Array of command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	/* Print the name of the program */
	printf("%s\n", *argv);

	return (0);
}

```
