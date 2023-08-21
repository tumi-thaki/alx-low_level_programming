#include "main.h" 

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 *
*/

void rev_string(char *s)
{
	char c;
	int  j = 0, i, len = 0;

	while (s[len] != '\0')
		len++;

	i = len / 2;

	while (len >= i)
	{
		c = s[j];
		s[j] = s[len];
		s[len] = c;
		len--;
		j++;
	}
}
