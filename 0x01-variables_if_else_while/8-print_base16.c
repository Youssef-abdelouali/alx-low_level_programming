#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all the numbers of base 16 in lowercase,
 *              followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int lower;
    char hexa;

    for (lower = 48; lower < 58; lower++)
    {
        putchar(lower);
    }
    for (hexa = 'a'; hexa <= 'f'; hexa++)
    {
        putchar(hexa);
    }

    putchar('\n');
    return 0;
}
