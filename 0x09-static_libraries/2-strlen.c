#include "main.h"

/**
 * _strlen - determines the length of the string
 * @s : argument string to be checked for length
 * Return: length of the string
 *
*/

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
