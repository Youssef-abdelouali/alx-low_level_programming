#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
    int digit = 0;

    do {
        printf("%d", digit);
        digit++;
    } while (digit < 10);

    printf("\n");

    return 0;
}
