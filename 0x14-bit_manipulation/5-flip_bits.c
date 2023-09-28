#include "main.h"

/**
 * flip_bits - returns the number of bits needed to be fliped
 * @n: first number
 * @m: second number
 * Return: number of bits
 *
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int f = n ^ m;
	unsigned int c = 0;

	while (f)
	{
		c += f & 1;
		f >>= 1;
	}

	return (c);
}
