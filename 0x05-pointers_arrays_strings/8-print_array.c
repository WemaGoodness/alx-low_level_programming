#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of
 * an array of integers
 * @n: number of elements
 * @a: array
 *
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int x = 0;

	while (x < n)
	{
		printf("%d", a[x]);

		if (x != (n - 1))
		{
			printf(", ");
		}

		x++;
	}

	printf("\n");
}
