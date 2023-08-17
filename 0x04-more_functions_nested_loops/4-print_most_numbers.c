#include "main.h"

/**
 * print_most_numbers - prints all numbers expect 2 amd 4
 * Return: nothing, void
 *
*/

void print_most_numbers(void)
{
	char c;
	for (c = 48; c <= 57; c++)
	{
		if(c == 50 || c == 52)
			continue;
		else
			_putchar(c);
	}
	_putchar('\n');
}
