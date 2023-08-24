#include "main.h"

/**
 * rot13 - a string using rot13, each character rotates 13 places
 * @s: string to be encoded
 * Return: pointrt to string
 *
*/

char *rot13(char *s)
{
	int i = 0, j;
	char letter[ ] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ", rot13[ ] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (s[i] != '\0')
	{
		for(j = 0; j <= 52; j++)
			if (s[i] == letter[j])
			{
				s[i] = rot13[j];
				break;
			}
		i++;
	}

	return (s);
}
