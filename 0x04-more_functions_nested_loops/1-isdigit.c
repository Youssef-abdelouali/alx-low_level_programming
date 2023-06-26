#include "main.h"

/**
 * _isdigit - checks if a character is a digit from 0 to 9
 * @c: character to be checked
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	while (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
