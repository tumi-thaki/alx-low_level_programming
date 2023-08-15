#include "main.h"
/**
 * _islower - checks if a character is lowercase
 * @c - argument to be compared for lowercase 
 * Return: 1 if c is lowercase 0 otherwise
*/

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	return (0);
}
