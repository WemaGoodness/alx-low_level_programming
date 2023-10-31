#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D grid created
 * by alloc_grid
 * @grid: 2D grid
 * @height: Vertical side of grid
 *
 * Return: Always a success
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
