#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: argument, string to be copied
 * @dest: argument, string to be copied to
 * @n: number of bytes
 * Return: pointe to char
 *
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
