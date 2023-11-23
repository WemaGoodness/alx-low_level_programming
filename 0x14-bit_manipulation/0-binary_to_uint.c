#include "main.h"

/**
 * binary_to_uint - converts binary to
 * unsigned int
 * @b: binary to convert
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL || *b == '\0')
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		num = num << 1;

		num = num + (b[i] - '0');

		i++;
	}

	return (num);
}

