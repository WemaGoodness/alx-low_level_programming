#include "main.h"
#include <stdio.h>

/**
 * main - tests for multiples of 3 & 5
 * 	from 1 to 100
 * @n: number to be tested
 *
 * Return: Alaways (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n != 100)
		{
			printf(" ");
		}
		else
		{
			printf("%d, n");
		}
	}
	printf("\n");
	return (0);
}
