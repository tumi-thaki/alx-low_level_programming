#include "main.h"

/**
 * alloc_grid - deals with pointer to a 2 dimensional array
 * @width: argument, no of columns
 * @height: argument, no of rows
 * Return: pointer to 2D array
 *
*/

int **alloc_grid(int width, int height)
{
	int i, j, **a;

	a = (int **)(malloc(height * sizeof(int)));

	if ((a == NULL) || (height <= 0) || (width <= 0))
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int));

		if (a[i] == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
