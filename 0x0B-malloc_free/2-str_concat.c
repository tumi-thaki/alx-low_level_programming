#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: argument
 * @s2: argument
 * Return: pointer to resultant string
 *
*/

char *str_concat(char *s1, char *s2)
{
	char *a;
	int i = 0, j = 0, k = 0, l = 0;

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	a = (char *)(malloc((i + j + 2) * sizeof(char)));

	for (; k < (i + j + 1); k++)
	{
		if (k <= i)
			a[k] = s1[k];

		a[k] = s2[l++];
	}

	a[k++] = '\0';

	return (a);
}
