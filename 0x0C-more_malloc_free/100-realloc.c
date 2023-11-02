#include "main.h"
#include <main.h>

/**
 * _realloc - reallocates memory block
 * @ptr: pointer to memory
 * @old_size: original allocated bytes
 * @new_size: newly allocated bytes
 *
 * Return: Always a success
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i, min;
	char *old_ptr, *new_ptr_char;
	void *new_ptr;

	if (new_size == 0)
	{
		if (ptr != NULL)
		{
			free(ptr);
		}
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	min = (old_size < new_size) ? old_size : new_size;
	old_ptr = ptr;
	new_ptr_char = new_ptr;
	for (i = 0; i < min; i++)
	{
		new_ptr_char[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
