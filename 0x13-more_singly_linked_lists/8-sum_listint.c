#include "lists.h"
#include <stdio.h>

/**
* sum_listint - function that returns sum of all data (n) of a listint_t list.
* @head: head of listint_t list
*
* Return: sum of data(n), 0 otherwise.
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
