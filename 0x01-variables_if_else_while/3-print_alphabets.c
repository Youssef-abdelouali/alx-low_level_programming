#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase,
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int lower;
    int upper;

    for (lower = 'a'; lower <= 'z'; lower++)
        putchar(lower);

    for (upper = 'A'; upper <= 'Z'; upper++)
        putchar(upper);

    putchar('\n');

    return (0);
}
