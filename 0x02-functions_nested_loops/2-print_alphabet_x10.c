#include "main.h"
/**
 * print_alphabet_x10 - prints the lowercase alphabet letters 10 times
 * Return: void
*/
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		for (c = 97; c < 123; c++)
			_putchar(c);
		_putchar('\n');
	}
}
