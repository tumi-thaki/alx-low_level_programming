#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: argument number to be checked for last digit
 * Return: last digit of a given number n
*/

int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
		lastDigit *= -1;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
