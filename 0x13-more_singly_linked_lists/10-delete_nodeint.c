#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: pointer to pointer to the head of the list
 * @index: index of node to be deleted, starting from 0
 *
 * Return: 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	current = *head;
	prev = NULL;

	for (i = 0; i < index && current != NULL; i++)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (prev == NULL)
	{
		*head = current->next;
	}
	else
		prev->next = current->next;

	free(current);
	return (1);
}
