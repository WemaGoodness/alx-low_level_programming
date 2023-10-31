#include "main.h"
#include <stdlib.h>

/**
 * create_array -creates an array of
 * chars
 * @size: number of bytes
 * @c: character to allocate
 *
 * Return: array of chars
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
	{
		return (NULL);
	}

	ar = (char*)malloc(size * sizeof(char));

	if (ar != NULL)
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
	}

	return (ar);
}
