#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to be modified.
 * @to: Pointer to char to set the pointer value to.
 *
 * Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
