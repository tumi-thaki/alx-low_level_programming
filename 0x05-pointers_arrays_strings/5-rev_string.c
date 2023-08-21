#include "main.h" 

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 *
*/

void rev_string(char *s)
{
	char c, p;
	int  j = 0, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (;len >= 0; len--)
	{
		c = s[j];
		p = s[len];
		s[j] = p;
		s[len] = c;
		j++;
	}
}
