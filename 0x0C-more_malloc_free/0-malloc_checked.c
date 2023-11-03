#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * @b: integer to be allocated memory
 *
 * Return: Always a success
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
	{
		exit (98);
	}
	else
	{
		return (p);
	}
}
