#include <stdio.h>

/**
 * print_fib - function to print fibonacci numbers
 *
 * Return: fibonnacci sequence
 */
void print_fib(unsigned long n)
{
	unsigned long f = 0, i = 1, b;

	if (n < 1)
	{
		return;
	}

	printf("%lu ", f);
	for (b = 1; b < n; b++) 
	{
		unsigned long next;

		printf("%lu ", i);
		next = f + i;
		f = i;
		i = next;
	}
}

/**
  * main - Prints the first 98 fibonacci numbers
  *
  * Return: void
  */
int main(void)
{
	print_fib(98);
	return (0);
}
