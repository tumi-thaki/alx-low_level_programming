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
	int size = 0, i = 0, j = 0, k = 0;
	char *a;

	if ((ac == 0) || (av == NULL))
		return (NULL);

	for (; i < ac; i++)
	{
		for (; av[i][j]; j++)
			size++;
		size++;
	}

	a = (char *)(malloc(size * sizeof(char)));

	if (a == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (k < (size - 1))
			{
				a[k++] = av[i][j];
			}
			else
			{
				free(a);
				return (NULL);
			}
		}
		a[k] = '\n';
		k++;
	}

	a[k++] = '\0';
	return (a);
}
