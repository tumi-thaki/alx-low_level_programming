#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 * Return: nothing, void
 *
*/

void more_numbers(void)
{
	int num, i;
	for (i = 0; i < 10; i++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
