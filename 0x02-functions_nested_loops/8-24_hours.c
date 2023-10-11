#include "main.h"

/**
 * jack_bauer - every minute of the day of Jack Bauer from 00:00 to 23:59.
 *
 * Return: time in 24-hr format
 */
void jack_bauer(void)
{
	int t, i, m, e;

	for (t = 0; t <= 2; t++)
	{
		for (i = 0; i <= 9; i++)
		{
			if ((t <= 1 && i <= 9) || (t <= 2 && i <= 3))
			{
				for (m = 0; m <= 5; m++)
				{
					for (e = 0; e <= 9; e++)
					{
						_putchar(t + '0');
						_putchar(i + '0');
						_putchar(58);
						_putchar(m + '0');
						_putchar(e + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
