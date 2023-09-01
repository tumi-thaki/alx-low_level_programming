#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: string, argument to be filled
 * @b: string, argument to fill
 * @n: number of bytes
 * Return: pointer to char
 *
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
