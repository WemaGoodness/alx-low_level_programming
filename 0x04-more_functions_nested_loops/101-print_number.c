#include "main.h"
#include <stdio.h>

/**
 * print_number - prints integer
 * @s: stores sign of n
 * @d: stores each digit of n
 * @p: stores the power of 10
 *
 * Return: Always (success)
 */
void print_number(int n)
{
	int s = 1;
	int d;
	int p = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		s = -1;
		_putchar('-');
	}

	while ((n / p / 10) != 0)
	{
		p *= 10;
	}

	while (p > 0)
	{
		d = (n / p % 10) * s;
		_putchar(d + '0');
		p /= 10;
	}
}

