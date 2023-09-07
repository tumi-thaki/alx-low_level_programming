#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum value to be contained
 * @max: maximum value to be contained
 * Return: the pointer to the newly created array
 *
*/

int *array_range(int min, int max)
{
	int j = 0, *a;

	if (min > max)
		return (NULL);

	a = malloc((min - max + 1) * sizeof(*a));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[j] = min;
		j++;
		min++;
	}

	return (a);
}
