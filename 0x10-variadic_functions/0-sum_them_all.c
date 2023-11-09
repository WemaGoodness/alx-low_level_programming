#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - gets sum of all
 * parameters
 * @n: variable
 *
 * Return: Always a success
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (unsigned int i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
