#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of
 * diagonals of square
 * @a: array containing square values
 * @size: square size
 *
 * Return: Always (Success)
 */
void print_diagsums(int *a, int size)
{
	int pSum = 0;
	int sSum = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		pSum += a[i * size + i];
		sSum += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", pSum, sSum);
}
