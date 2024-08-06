#include "lists.h"

/**
* pop_listint - deletes the head node of a listint_t linked list
* @head: double pointer to the head of the list
*
* Return: the head nodes data(n), or NULL if it is empty.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL)
		return (0);

	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
