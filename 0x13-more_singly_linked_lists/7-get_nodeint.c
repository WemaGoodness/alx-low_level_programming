#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t
 * @head: pointer to head of list
 * @index: index of node, starting at 0
 *
 * Return: nth node, or NULL if it does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current_node;
	unsigned int count = 0;

	current_node = head;
	while (current_node != NULL && count < index)
	{
		current_node = current_node->next;
		count++;
	}

	return (current_node);
}

