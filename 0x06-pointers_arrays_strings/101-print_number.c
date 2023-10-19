#include "main.h"

/**
 * print_numbers - prints integer
 * @n: integer to print
 *
 * Return: Always (0)
 */
void print_number(int n)
{
	unsigned int reversed = 0;
        unsigned int digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n > 0)
	{
		digit = n % 10;
		reversed = reversed * 10 + digit;
		n = n / 10;
	}

	if (reversed == 0)
	{
		_putchar('0');
	}
	else
	{
		while (reversed > 0)
		{
			_putchar('0' + (reversed % 10));
			reversed = reversed / 10;
		}
	}
}
