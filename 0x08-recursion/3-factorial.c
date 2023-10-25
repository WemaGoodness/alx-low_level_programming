#include "main.h"

/**
 * factorial - returns factorial of a
 * given number
 * @n: number to factor
 *
 * Return: factorial of n
 */
int factorial(int n)
{
	int i;
	int ans = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	for (i = 1; i <= n; i++)
	{
		ans *= i;
	}

	return (ans);
}
