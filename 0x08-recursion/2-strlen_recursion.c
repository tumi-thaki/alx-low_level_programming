#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: argument, string to check for length
 * Return: length of string input
 *
*/

int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}
