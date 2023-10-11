#include "main.h"

/**
  * _abs - Computes the absolute value of an integer.
  * @c: number to be computed.
  *
  * Return: Absolute value of number of c or 0
  */
int _abs(int c)
{
	if (c < 0)
	{
		int absolute;

		absolute = c * -1;

		return (absolute);
	}

	return (c);
}

