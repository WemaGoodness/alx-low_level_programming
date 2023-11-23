#include "main.h"

/**
 * clear_bit - sets bit values to 0
 * at given index
 * @n: number
 * @index: index
 *
 * Return: success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > (sizeof(*n) * 8 - 1))
	{
		return (-1);
	}

	mask = ~(1 << index);

	*n = *n & mask;

	return (1);
}
