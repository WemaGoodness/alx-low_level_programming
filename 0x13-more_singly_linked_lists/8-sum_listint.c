#include "lists.h"

/**
 * sum_listint - returns sum of all data (n) of listint_t
 * @head: pointer to head of list
 *
 * Return: sum of all data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current_node;
	int sum = 0;

	current_node = head;
	while (current_node != NULL)
	{
		sum += current_node->n;
		current_node = current_node->next;
	}

	return (sum);
}

