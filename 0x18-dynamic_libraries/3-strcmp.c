#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: argument, string to be compared
 * @s2: argument, string to be compared
 * Return: 0 for identical strings a negative or positive integer otherwise
 *
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, j;

	while ((s1[i] != '\0') && (s2[i] != '\0'))
	{
		j = s1[i] - s2[i];
		if (s1[i] != s2[i])
			break;
		i++;
	}
	
	return (j);
}
