#include "main.h"

/**
 * _strncat - concatenates two string
 * @dest: destination string for appending
 * @src: the source string to be appended
 * @n: number of bytes to be copied
 * Return: pointer to dest
 *
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	
	while (j < n)
		dest[i++] = src[j++];

	return (dest);
}
