#include "lists.h"

/**
 * listint_len - returns number of elements in listint_t list
 * @h: pointer to head of list
 *
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

