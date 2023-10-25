#include "main.h"

/**
 * check_prime - checks if n is
 * a prime number
 * @n: number to be checked
 * @i: maximum divisibile value
 *
 * Return: 1 or 0
 */
int check_prime(int n, int i)
{
	if (i <= 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}

	return (check_prime(n, i - 1));
}

/**
 * is_prime_number - states if n
 * is a prime number
 * @n: number to be chesked
 *
 * Return: Always(0)
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (check_prime(n, n - 1));
}
