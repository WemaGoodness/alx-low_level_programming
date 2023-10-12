#include <stdio.h>
#include <math.h>

/**
 * main - prints largest prime factor
 * 
 * Return: Always 0 (Success)
 * */
int main(void)
{
	long p, n = 612852475143;

	for (p = 2; p <= n; p++)
	{
		if (n % p == 0)
		{
			n = n / p;
			p--;
		}
	}
	printf("%lu\n, p");
	return (0);
}
