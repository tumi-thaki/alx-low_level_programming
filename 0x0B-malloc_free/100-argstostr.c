#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: pointer to array o arguments
 * Return: pointer to resultant string or NULL if ac or av is 0
 *
*/

char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0, size = 0;
	char *a;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (; i < ac; i++)
	{
		for (; av[i][j]; j++)
			size++;
		size++;
	}

	a = (char *)(malloc((sizeof(char) * size) + 1));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, k++)
		{
			a[k] = av[i][j];
		}
		a[k] = '\n';
		k++;
	}

	a = '\0';
	return (a);
}
