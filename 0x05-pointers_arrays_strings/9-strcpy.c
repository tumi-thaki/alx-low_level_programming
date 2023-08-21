#include "main.h"

/**
 * _strcopy - copies a string to destination 
 * @dest: argument, string to be copied to, destination
 * @src: argument, string to be copied
 * Return: string
 *
*/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';
	return (dest);

}
