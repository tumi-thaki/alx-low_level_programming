#include "main.h" 

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: nothing
 *
*/

void rev_string(char *s)
{
	char c = s[0];
	int  j = 0, len = 0;

	while (s[len] != '\0')
		len++;

	for (j = 0; j < len; j++)
	{
		len--;
		c = s[j];
		s[j] = s[len];
		s[len] = c;
	}
}
