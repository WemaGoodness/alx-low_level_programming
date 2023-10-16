#include "main.h"

/**
 * reset_to_98 - updates value to 98
 * @*n: pointer to update value
 *
 * Return: Always 0
 */
void reset_to_98(int *n)
{
	int p = 402;
	*n = &p;

	_putchar("%d", p);

	*n = 98;

	_putchar("%d", p);
}
