#include "main.h"

/**
  * print_times_table - Prints a multiplication table up to n
  * @n: final number to be multiplied
  *
  * Return: Number matrix
  */
void print_times_table(int n)
{
	int t, i, m;

	if (n >= 0 && n <= 14)
	{
		for (t = 0; t <= n; t++)
		{
			for (i = 0; i <= n; i++)
			{
				m = t * i;
				if (m > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
				else if (m > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
				else
				{
					if (i != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(m + '0');
				}
			}
			_putchar('\n');
		}
	}
}

