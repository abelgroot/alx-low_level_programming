#include "lists.h"

/**
* add_nodeint - adds a new node at the beginning of a list_t list
* @head: double pointer to the head of the list
* @n: new integer to add in the node
*
* Return: the address of the new element, or NULL if it failed
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nodeint;

	new_nodeint = malloc(sizeof(listint_t));
	if (new_nodeint == NULL)
		return (NULL);

	new_nodeint->n = n;
	new_nodeint->next = *head;
	*head = new_nodeint;

	return (new_nodeint);
}
