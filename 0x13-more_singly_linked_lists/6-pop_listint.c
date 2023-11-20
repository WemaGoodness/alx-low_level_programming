#include "lists.h"

/**
 * pop_listint - deletes head node
 * @head: pointer to pointer to head of list
 *
 * Return: head node’s data (n), or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	n = temp->n;

	*head = temp->next;

	free(temp);

	return (n);
}

