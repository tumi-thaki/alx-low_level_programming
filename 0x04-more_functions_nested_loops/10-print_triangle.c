#include "main.h"

/**
 * print_triangle - prints a triangle on the terminal
 * @size: argument, size of the triangle
 * Return: nothing,void
 *
*/

void print_triangle(int size)
{
	int i, j, k, space, hash;

	if (n > 0)
	{
		for (i = 0; i < size; i++)
		{
			space = size - (i + 1);
			hash = i + 1;
			for (j = 0;j < space;j++)
				_putchar(' ');
			for (k = 0; k < hash; k++)
				_putchar('#');
		}
	}
	_putchar('\n');
}
