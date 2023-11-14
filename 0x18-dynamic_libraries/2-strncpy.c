#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string to be appended
 * @src: string to be appended
 * @n: number of bytes to be copied
 * Return: pointer to dest
 *
*/

char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}

	return (dest);
}
