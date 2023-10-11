#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int t, i, m, e, s;

	for (t = 0; t <= 9; t++)
	{
		for (i = 0; i <= 9; i++)
		{
			m = t * i;

			if (m > 9)
			{
				e = m % 10;
				s = (m - e) / 10;

				_putchar(44);
				_putchar(32);
				_putchar(s + '0');
				_putchar(e + '0');
			}
			else
			{
				if (i != 0)
				{
					_putchar(44);
					_putchar(32);
					_putchar(32);
				}

				_putchar(m + '0');
			}
		}

		_putchar('\n');
	}
}
