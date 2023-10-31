#include "main.h"
#include <stdlib.h>

/**
 * alloc_grind - returns pointer to
 * 2 dimensional array
 * @width: shorter side of dimension
 * @height: vertical side of dimension
 *
 * Return: Always a success
 */
int **alloc_grid(int width, int height)
{
	int i, j, **grind;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grind = (int **)malloc(height * sizeof(int *));

	if (grind == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grind[i] = (int *)malloc(width * sizeof(int));
		if (grind[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grind[j]);
			}
			free(grind);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			grind[i][j] = 0;
		}
	}
	return (grind);
}
