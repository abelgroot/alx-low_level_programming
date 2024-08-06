#include "lists.h"
#include <stdio.h>

/**
* insert_nodeint_at_index - function that inserts a new node at given position.
* @head: list begining of the node.
* @idx: is the index of the list where new node should be added.
* @n: integer value of the new node.
*
* Return: listint_t pointer to the node, NULL otherwise.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	new_node = NULL;

	if (head == NULL)
	{
		if (idx == 0)
		{
			new_node->n = n;
			new_node->next = NULL;
			return (new_node);
		}
		else
			return (NULL);
	}

	temp = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	new_node->next = temp->next;
	temp->next = new_node;
	new_node->n = n;

	return (new_node);
}
