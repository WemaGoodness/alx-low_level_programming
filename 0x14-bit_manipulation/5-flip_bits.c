#include "main.h"

/**
 * flip_bits - returns number of flips
 * needed to flip to get to the next number
 * in sequence
 * @n: number
 * @index: index
 *
 * Return: success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int x;

	x = n ^ m;

	while (x)
	{
		count += x & 1;
		x = x >> 1;
	}
	return (count);
}
