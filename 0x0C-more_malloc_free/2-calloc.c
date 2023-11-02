#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an
 * array
 * @nmemb: an array
 * @size: bytes to allocate
 *
 * Return: Always a success
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, total_size;
	unsigned char *bytes;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(total_size);
	if (p != NULL)
	{
		bytes = (unsigned char *)p;
		for (i = 0; i < total_size; i++)
		{
			bytes[i] = 0;
		}
	}

	return (p);
}
