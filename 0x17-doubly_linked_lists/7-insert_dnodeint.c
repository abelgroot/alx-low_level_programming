#include "lists.h"
#include <stdlib.h>

/**
* insert_dnodeint_at_index - Inserts a new node at a given position
* @h: Pointer to the pointer of the head node
* @idx: Index where the new node should be inserted
* @n: Value for the new node
*
* Return: Address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (idx == 0) /* Special case: Insert at the head */
		return (add_dnodeint(h, n));

	/* Traverse to the node at the specified index or the end of the list */
	while (temp && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL && i == idx - 1) /* Special case: Insert at the end */
		return (add_dnodeint_end(h, n));

	if (temp == NULL) /* If index is out of range */
		return (NULL);

	/* Allocate memory for the new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL) /* If we are not inserting at the end */
		temp->next->prev = new_node;

	temp->next = new_node;

	return (new_node);
}
