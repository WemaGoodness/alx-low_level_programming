#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of
 * integers
 * @min: minumum integer
 * @max: maximum integer
 *
 * Return: Always a success
 */
int *array_range(int min, int max)
{
	int size, *ar, i;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	ar = malloc(size * sizeof(int));
	if (ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = min + i;
	}

	return ar;
}
