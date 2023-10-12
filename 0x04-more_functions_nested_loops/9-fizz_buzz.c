#include "main.h"
#include <stdio.h>

/**
 * main - tests for multiples of 3 & 5
 *
 * Return: Alaways (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}

		if (n != 100)
		{
			printf(" ");
		}
	}

	printf("\n");

	return (0);
}
