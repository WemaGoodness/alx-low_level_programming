#include "main.h"

/**
 * swap_int - swaps values of integers
 * @a: first integer
 * @b: second integer
 *
 * return: always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;

	*a = *b;
	*b = swap;
}
