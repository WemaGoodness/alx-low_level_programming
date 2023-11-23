#include "main.h"

/**
 * set_bit - sets value of bit to 1 at
 * given index
 * @n: number
 * @index: index
 *
 * Return: success
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(*n) * 8 - 1))
	{
		return (-1);
	}

	mask = 1 << index;

	*n = *n | mask;

	return (1);
}
