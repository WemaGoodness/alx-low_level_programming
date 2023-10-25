#include "main.h"

/**
 * get_root - calculates root of n
 * @n: number to square root
 * @i: root of n
 *
 * Return: root of n
 */
int get_root(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}

	return (get_root(n, i + 1));
}
/**
 * _sqrt_recursion - finds natural
 * square root of n
 * @n: number to square root
 *
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}

	return (get_root(n, 0));
}
