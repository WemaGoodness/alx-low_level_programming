#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - Returns sum of all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: sum of all the data (n). If list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
