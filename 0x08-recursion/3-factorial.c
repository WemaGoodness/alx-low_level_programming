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
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	int ans = 1;
	int i;

	for (i = 1; i <= n; i++)
	{
		ans *= i;
	}

	return (ans);
}
