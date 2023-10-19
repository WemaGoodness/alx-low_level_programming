#include "main.h"

/**
 * print_numbers - prints integer
 * @n: integer to print
 *
 * Return: Always (0)
 */
void print_number(int n)
{
	unsigned int reversed;

	if (n < 0)
	{
		_putchar('-');
		n *= -n;
	}

	reversed = n;

	if (reversed / 10)
	{
		print_number(reversed / 10);
	}

	_putchar('0' + (reversed % 10));
}
