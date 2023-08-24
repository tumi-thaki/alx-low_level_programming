#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: argument, detstination string 
 * @src: argument, string to be appended
 * Return: pointer to dest
 *
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;

	while (src[i] != '\0')
		i++;

	while (dest[j] != '\0')
		j++;

	for (k = 0; k <= i; k++, j++)
		dest[j] = src[k];

	return (dest);
}
