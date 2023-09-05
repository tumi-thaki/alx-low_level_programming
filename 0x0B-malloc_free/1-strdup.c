#include "main.h"

/**
 * _strdup - copies argument
 * @str: argument
 * Return: pointer to allocated space memory
 *
*/

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	a = (char *)(malloc((i + 1) * sizeof(char)));

	if (a == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		a[j] = str[j];
		j++;
	}

	return (a);
}
