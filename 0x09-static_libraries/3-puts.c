#include "main.h"

/**
 * _puts - prints string to terminal
 * @str: argument to be printed
 * Return: nothing
 *
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
