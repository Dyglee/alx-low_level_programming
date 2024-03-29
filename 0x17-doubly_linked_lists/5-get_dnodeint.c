#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: the index of the node, starting from 0
 *
 * Return: the nth node of a dlistint_t linked list, or NULL if not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int idx = 0;

	while ((idx != index) && (temp != NULL))
	{
		temp = temp->next;
		idx++;
	}

	return (temp);
}
