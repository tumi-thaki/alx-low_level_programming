#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: argument to be printed
 * Return: nothing
 *
*/

void puts2(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		if (len % 2 == 0)
			_putchar(str[len]);
		len++;
	}
	_putchar('\n');

}
