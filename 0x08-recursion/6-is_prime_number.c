#include "main.h"

/**
 * is_prime - checks if a number is prime
 * @n: argument number to be checked
 * @c: iteratio
 * Return: 1 if argument is prime number, 0 otherwise
 *
*/

int is_prime(int n, int c)
{
	if ((n % c) == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}

	return (is_prime(n, c + 1));
}

/**
 * is_prime_number - checks if input is a prime number
 * @n: argument
 * Return: 1 if n is prime, 0 otherwise
 *
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(n, 2));
}
