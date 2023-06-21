#include "main.h"

/**
 * print_alphabet - Prints all lowercase alphabets followed by a new line
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
