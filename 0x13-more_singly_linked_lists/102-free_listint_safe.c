#include "lists.h"

/**
 * free_listint_safe - frees listint_t
 * @h: pointer to pointer to head of list
 *
 * Return: size of freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *next;
	void *start, *end;

	if (h == NULL || *h == NULL)
	{
		return (0);
	}

	current = *h;
	start = (void *)current;
	end = (void *)(current->next);

	while (current != NULL)
	{
		count++;
		next = current->next;
		free(current);
		current = next;

		if (current != NULL)
		{
			if ((void *)current >= start && (void *)current <= end)
			{
				break;
			}
			end = (void *)(current->next);
		}
	}

	*h = NULL;
	return (count);
}

