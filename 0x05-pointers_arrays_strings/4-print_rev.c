#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 * Return: nothing
 *
*/

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	for (; len >= 0; len--)
		_putchar(s[len]);

	_putchar('\n');
}
