#include "main.h"

/**
 * prints _putchar
 *
 * followed by a new line.
 * The program should return 0
 */
 
int main(void)
{
        char text[] = "_putchar";
        int i = 0;

        while (text[i] != '\0')
        {
            _putchar(text[i]);
            i++;
        }

        _putchar('\n');

        return 0;
}
