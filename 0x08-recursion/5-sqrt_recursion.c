#include "main.h"

/**
 * _sqrt_recursion - finds natural
 * square root of n
 * @n: number to square root
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	int i;

	if ((i * i > n) && (n < 0))
	{
		return (-1);
	}
	if (i * i == 0)
	{
		return (i);
	}
	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_recursion(n, i + 1))
