#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* print_listint_safe - a fucntion that reserse a listint_t linked list.
* @head: a pointer to listint_t pointer.
*
* Return: number of nodes in the list, 98 otherwise.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fast = head;
	const listint_t *slow = head;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;

		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			count++;
			slow = slow->next;

			while (slow != fast)
			{
				printf("[%p] %d\n", (void *)slow, slow->n);
				count++;
				slow = slow->next;
			}
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			return (count);
		}
	}
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}
	return (count);
}
