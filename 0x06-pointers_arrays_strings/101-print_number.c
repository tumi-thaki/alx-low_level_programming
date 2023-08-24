#include "main.h"

/**
 * print_number - prints an integer
 * @n: argument, number to be printed 
 * Return: nothing 
 *
*/

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	
	num = n;

	if ((num / 10) > 0)
	{
		print_number(num / 10);
	}
	_putchar((n % 10) + '0');
}
