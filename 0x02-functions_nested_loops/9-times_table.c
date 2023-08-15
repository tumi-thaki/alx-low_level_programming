#include "main.h"

/**
 * times_table - prints the times table
 * Return: nothing, void
*/

void times_table(void)
{
	int i,j, product;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		for (j = 1; j < 10; j++)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			product = i * j;
			if (product < 10)
			{
				_putchar(product + '0');
			}
			else
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
