#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times \ is to be printed
 *
 * Return: diagonal line
 */
void print_diagonal(int n);
{
	int bs1, bs2;

	for (bs1 = 0; bs1 < n; bs1++)
	{
		for (bs2 = 0; bs2 < bs1; bs2++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
