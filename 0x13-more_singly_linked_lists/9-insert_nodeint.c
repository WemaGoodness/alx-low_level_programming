#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a position
 * @head: pointer to pointer to head of list
 * @idx: index of list
 * @n: data of new node
 *
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node, *previous_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current_node = *head;
	while (current_node != NULL && count < idx)
	{
		previous_node = current_node;
		current_node = current_node->next;
		count++;
	}

	if (current_node == NULL && count < idx)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current_node;
	previous_node->next = new_node;

	return (new_node);
}
