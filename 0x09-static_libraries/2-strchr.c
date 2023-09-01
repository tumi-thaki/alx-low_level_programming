#include "main.h"

/**
 * _strchr -  locates a character in a string
 * @s: string to be checked
 * @c: character to checked
 * Return: pointer to first occurrence of c or NULL if not found
 *
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] ==  c)
			return (s + i);
		i++;
	}

	return (NULL);
}
