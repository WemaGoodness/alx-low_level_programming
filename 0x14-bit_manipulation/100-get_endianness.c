#include "main.h"

/**
 * get_endianness - chekc the endianness
 * @void: empty
 *
 * Return: success
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *)&x;

	if (*c == 1)
	{
		return (1);
	}

	return (0);
}
