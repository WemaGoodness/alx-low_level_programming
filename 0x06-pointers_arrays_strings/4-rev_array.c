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
	int *start = a;
	int *end = a +n - 1;
	int temp = start;

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;
		start++;
		end--;
	}
}
