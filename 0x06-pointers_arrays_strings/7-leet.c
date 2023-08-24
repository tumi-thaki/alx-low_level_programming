#include "main.h"

/**
 * leet - that encodes a string into 1337.
 * @s: argument, string to be converted 
 * Return: pointer to string
 *
*/

char *leet(char *s)
{
	int i = 0, j;
	char upper[ ] = {65, 69, 79, 84, 76}, lower[ ] = {97, 101, 111, 116, 108}, replace[ ] = {52, 51, 48, 55, 49};

	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if ((s[i] == upper[j]) || (s[i] == lower[j]))
				s[i] = replace[j];
		}
		i++;
	}

	return (s);
}
