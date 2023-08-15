#include "main.h"
/**
 * print_alphabet - uses _putchar to print lowecase alphabet
 * Return: void
*/
void print_alphabet(void)
{
	char c = 97;

	for (c = 97; c < 123; c++)
		_putchar(c);
	_putchar('\n');
}
