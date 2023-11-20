#include "lists.h"

/**
 * free_listint2 - frees listint_t & sets head to NULL
 * @head: pointer to pointer to head of list
 *
 * Return: Success
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node, *next_node;

	if (head == NULL)
		return;

	current_node = *head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		free(current_node);
		current_node = next_node;
	}

	*head = NULL;
}

