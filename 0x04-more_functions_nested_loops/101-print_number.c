#include "main.h"
#include <stdio.h>

/**
 * print_number - prints integer
 *
 * Return: Always (success)
 */
void print_number(int n)
{
	int sign = 1;
	int digit;
	int power = 1;
	
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		sign = -1;
		_putchar('-');
	}
	
	while (n / power / 10 != 0)
	{
		power *= 10;
	}
	
	while (power > 0)
	{
		digit = n / power % 10 * sign;
		_putchar(digit + '0');
		power /= 10;
	}
}

