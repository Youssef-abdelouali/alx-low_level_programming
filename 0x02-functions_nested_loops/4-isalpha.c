#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * Prototype: int _isalpha(int c);
 * c The character to be checked
 *
 * Returns 1 if c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
