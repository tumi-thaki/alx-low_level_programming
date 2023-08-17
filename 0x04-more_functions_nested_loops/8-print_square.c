#include "main.h"

/**
 * print_square - prints a square using # on the terminal
 * @size: arugumen, length of square
 * Return: nothing, void
 *
*/

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for(j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
