#include <stdio.h>

/**
  * main - Prints all possible combinations of two two-digit numbers.
  *
  * Return: Always (Success)
  */
int main(void)
{
	int x, y, z, a;

	for (x = 48; x <= 57; x++)
	{
		for (y = 48; y <= 57; y++)
		{
			for (z = 48; z <= 57; z++)
			{
				for (a = 48; a <= 57; a++)
				{
					if (((z + a) > (x + y) &&  z >= x) || x < z)
					{
						putchar(x);
						putchar(y);
						putchar(' ');
						putchar(z);
						putchar(a);

					if (x + y + z + a == 227 && x == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}

