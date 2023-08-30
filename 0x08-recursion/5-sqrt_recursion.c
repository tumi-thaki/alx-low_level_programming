#include "main.h"

/**
 * power - calculates the natural square root of a number
 * @num: argument
 * @c: iterator
 * Return: square root ot -1
 *
*/

int power(int num, int c)
{
	if (c == num)
		return (-1);
	if (c * c == num)
		return (c);
	else
		return (power(num, c + 1));
}

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: argument
 * Return: square root or -1
 *
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (power(n, 2));
}
