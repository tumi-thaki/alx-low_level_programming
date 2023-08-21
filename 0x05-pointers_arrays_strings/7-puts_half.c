#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: argument to be printed
 * Return: nothing
 *
*/


void puts_half(char *str)
{
	int j, len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		j = len / 2;
	else
		j = (len + 1) / 2;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
