#include "lists.h"
#include <stdio.h>

/**
* print_listint - function that prints all the elements of a listint_t list.
* @h: constant listint_t list
*
* Return: the number of nodes.
*/

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node++;
	}

	return (node);
}
