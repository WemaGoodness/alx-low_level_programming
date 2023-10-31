#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees 2D freid created
 * by alloc_grid
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
