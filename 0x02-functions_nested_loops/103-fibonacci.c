#include <stdio.h>

/**
  * main - Prints sum of even Fibonacci numbers < 4000000
  *
  * Return: void
  */
int main(void)
{
	int f = 0;
	long i = 1, b = 2, sum = b;

	do {
		b += i;

		if (b % 2 == 0)
			sum += b;

		i = b - i;

		++f;
	} while (b + i < 4000000);

	printf("%ld\n", sum);
	return (0);
}
