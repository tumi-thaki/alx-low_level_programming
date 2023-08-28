#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: argument, string to be checked
 * @accept: string to be checked
 * Return: pointer to s that matches, or NULL
 *
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j = 0;
	
	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[i])
			{
				return (s + i);
			}	
			j++;
		}

		i++;
	}

	return (NULL);
}
