#include "lists.h"
#include <stdlib.h>

/**
* delete_dnodeint_at_index - Deletes the node at a given index in a dlistint_t
* @head: Pointer to the pointer of the head node
* @index: The index of the node that should be deleted, starting from 0
*
* Return: 1 if succeeded, -1 if failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (*head == NULL) /* Check if the list is empty */
		return (-1);

	/* If the node to be deleted is the head node */
	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL) /* Update the previous pointer of the next node */
			temp->next->prev = NULL;
		free(temp);
		return (1);
	}

	/* Traverse the list to find the node at the specified index */
	while (temp != NULL && i < index)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL) /* Check if the index is out of range */
		return (-1);

	/* If the node to be deleted is not the last node */
	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	/* If the node to be deleted is not the first node */
	if (temp->prev != NULL)
		temp->prev->next = temp->next;

	free(temp);
	return (1);
}
