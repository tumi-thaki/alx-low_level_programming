#include "main.h"

/**
 * _isalpha - checks for an alphabet
 * @c - argument to be checked
 * Return: 1 if c is a letter, 0 otherwise
*/

int _isalpha(int c)
{
	if (((c + '0') < 123 && (c + '0') > 96) || ((c + '0') > 64 && (c + '0') < 91))
	       return (1);
	return (0);	
}
