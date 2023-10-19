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
	int i = 0;
	int j = n - 1;
	
	while (i < j)
	{
		int temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
