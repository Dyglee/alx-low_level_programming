#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of linked list
 * @head: double pointer to the head of the doubly linked list
 * @index: the index of the node that should be deleted, starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int idx = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;
	while (temp != NULL && idx != index)
	{
		temp = temp->next;
		idx++;
	}

	if (temp == NULL)
	{
		return (-1);
	}

	if (temp->prev != NULL)
	{
		temp->prev->next = temp->next;
	}
	else
	{
		*head = temp->next;
	}

	if (temp->next != NULL)
	{
		temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
