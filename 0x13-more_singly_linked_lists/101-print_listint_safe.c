#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - prints a listint_t linked list safely (handles loops)
* @head: pointer to the head of the list
*
* Return: the number of nodes in the list
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}

	while (fast != NULL && fast->next != NULL)
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

	slow = head;
	while (slow != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		slow = slow->next;
	}

	return (count);
}
