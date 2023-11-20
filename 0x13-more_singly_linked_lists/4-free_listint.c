#include "lists.h"

/**
 * free_listint - frees listint_t
 * @head: pointer to head of list
 *
 * Return: Success
 */
void free_listint(listint_t *head)
{
	listint_t *current_node, *next_node;

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}
}

