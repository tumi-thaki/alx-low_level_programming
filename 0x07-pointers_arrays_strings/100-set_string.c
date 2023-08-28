#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: argument, pointer to pointer for string
 * @to: argument, pointer to string for manipulation
 * Return: nothing
 *
*/

void set_string(char **s, char *to)
{
	*s = to;
}
