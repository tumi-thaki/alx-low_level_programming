#include "main.h"

/**
 * print_sign - print the sign of a number
 * @n - number to be checked to sign
 * Return: 1 if its positive, 0 for zero and -2 for negative numbers
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
