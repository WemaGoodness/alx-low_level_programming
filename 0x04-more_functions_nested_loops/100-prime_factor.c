#include <stdio.h>
/**
* main - entry block
*
* Return: 0
*/
int main(void)
{
	long p, n = 612852475143;

	for (p  = 2; p <= n; p++)
	{
		if (n % p == 0)
		{
			n = n / p;
			p--;
		}
	}
	printf("%lu\n", p);
	return (0);
}
