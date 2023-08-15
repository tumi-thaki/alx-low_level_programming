#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c - argument to be checked
 * Return: 1 if c is lowercase 0 otherwise
*/

int _islower(int c)
{
	if ((c + '0') < 123 && (c +'0') > 96)
		return (1);
	return (0);
}
