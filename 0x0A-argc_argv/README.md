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

1. Silence is argument carried out by other means


_Write a program that prints the number of arguments passed into it._

```sh
#include <stdio.h>
#include "main.h"

/**
 * main - Prints the number of arguments passed to the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv; /* Ignore argv */
	printf("%d\n", argc - 1);

	return (0);
}

```

2. The best argument against democracy is a five-minute conversation with the average voter


_Write a program that prints all arguments it receives._

```sh
#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments received by the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

```

