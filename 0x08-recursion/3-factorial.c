#include "main.h"

/**
 * factorial - calculates factorial
 * @n: argument, factorial of
 * Return: result
 *
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
