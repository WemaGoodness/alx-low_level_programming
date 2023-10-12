#include "main.h"

/**
 * print_most_numbers - prints 0 - 9 except 2 & 4
 *
 * Return: success
 */
void print_most_numbers(void)
{
	int c = 0;

	for (c = 0; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}

	_putchar('\n');
}
