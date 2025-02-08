#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to return, starting from 0.
 *
 * Return: The nth node of the list, or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	/* Traverse the list until the desired index is reached */
	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	/* Return NULL if the index is out of bounds */
	return (NULL);
}
