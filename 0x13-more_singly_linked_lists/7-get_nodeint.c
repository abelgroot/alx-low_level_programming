#include "lists.h"
#include <stdio.h>

/**
* get_nodeint_at_index - function that return nth node of a listint_t list.
* @head: start of the node.
* @index: is the index of the node starting at 0.
*
* Return: listint_t pointer to the node, NULL otherwise.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; i <= index; i++)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
	}

	return (temp);
}
