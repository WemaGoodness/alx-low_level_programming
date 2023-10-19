#include "main.h"

/**
 * reverse_array - reverses an array's
 * contents
 * @a: array
 * @n: number of elements in a
 *
 * Return: Always (Success)
 */
void reverse_array(int *a, int n)
{
	int i, temp;
	
	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
