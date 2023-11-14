#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: aurgument to be checked
 * Return: 1 if character is uppercase,0 otherwise
 *
*/

int _isupper(int c)
{
	if (c < 91 && c > 64)
		return (1);
	else
		return (0);
}
