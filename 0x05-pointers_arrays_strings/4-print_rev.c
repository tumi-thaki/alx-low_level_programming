#include "main.h"

/**
 * print_rev - prints a string in reverse 
 * @s: string to be reversed
 * Return: nothing
 *
*/

void print_rev(char *s)
{
	int i = 0, len;

	while(s[i] != '\0')
		i++;

	len = i;
	
	while(len > 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar('\n');
}
