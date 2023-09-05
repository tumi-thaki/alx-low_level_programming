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
	int i, j, k = 0, m = 0, l = 0;

	while (s1[m] != '\0')
		m++;

	while (s2[l] != '\0')
		l++;

	a = (char *)(malloc((l + m + 2) * sizeof(char)));

	if (a == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++, k++)
		a[k] = s1[i];

	for (j = 0; s2[j]; j++, k++)
		a[k] = s2[j];

	a[k++] = '\0';

	return (a);
}
