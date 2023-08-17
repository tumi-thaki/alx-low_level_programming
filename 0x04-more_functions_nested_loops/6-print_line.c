#include "main.h"

/**
 * print_line - prints a horizontal line with given characters
 * @n: argument, length of the line
 * Return: nothing, void
 *
*/

void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
