#include "lists.h"
#include <stdio.h>

/**
* delete_nodeint_at_index - function that delete a node at given position.
* @head: list begining of the node.
* @index: is the index of the list which should be deleted.
*
* Return: 1 if it succeded, -1 otherwise.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *delete_node;
	unsigned int i = 0;

	if (head == NULL)
		return (-1);

	temp = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			return (-1);
		}
		temp = temp->next;
	}

	delete_node = temp->next;
	temp->next = delete_node->next;
	free(delete_node);

	return (1);
}
