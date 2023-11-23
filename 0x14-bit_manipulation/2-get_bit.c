#include "main.h"

/**
 * get_bit - returns value of
 * given index
 * @index: index
 * @n: number
 *
 * Return: value of index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(n) * 8 - 1))
	{
		return (-1);
	}

	n = n >> index;

	return (n & 1);
}
