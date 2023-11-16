#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: Success
 */
void free_list(list_t *head)
{
	list_t *current;
	list_t *next;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
