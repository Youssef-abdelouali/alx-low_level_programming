#include "main.h"
#include <unistd.h>

/**
 * A program that prints _putchar
 * followed by a new line.
 * 
 * The program should return 0.
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}
