#include "main.h"

/**
 * print_diagonal - prints diagonal line on the terminal
 * @n: argument, deteemined how many characters to print
 * Return: nothing, void
 *
*/

void print_diagonal(int n)
{
	int space, line;
	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
