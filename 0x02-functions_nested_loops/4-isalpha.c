#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int alpha;

    alpha = _islower('H');  
    _putchar(alpha + '0');  
    alpha = _islower('o');  
    _putchar(alpha + '0');
    alpha = _islower(108);   
    _putchar(alpha + '0');  
    _putchar('\n');  

    return (0);
}
