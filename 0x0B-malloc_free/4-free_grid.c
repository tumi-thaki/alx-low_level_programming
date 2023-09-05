#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 * @grid: array input to free
 * @height: size of array to free
 * Return: nothing
 *
*/

void free_grid(int **grid, int height)
{
	int i = 0;
	if (grid == NULL)
		return;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	
	free(grid);
}
