#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_itarator - repeats array
 * @array: array to repeat
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Always a success
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
