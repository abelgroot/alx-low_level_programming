#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
* print_listint_safe - Prints a listint_t linked list safely (handles loops).
* @head: Pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *slow = head;
	const listint_t *fast = head;
	const listint_t *loop_start = NULL;
	const listint_t *node = head;
	const listint_t *loop_node = NULL;
	size_t count = 0;
	int loop_detected = 0;

	if (head == NULL)
	{
		exit(98);
	}

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			loop_detected = 1;
			break;
		}
	}

	if (loop_detected)
	{
		slow = head;
		while (slow != fast)
		{
			slow = slow->next;
			fast = fast->next;
		}
		loop_start = slow;

		node = head;
		while (node != loop_start)
		{
			printf("[%p] %d\n", (void *)node, node->n);
			node = node->next;
			count++;
		}

		printf("[%p] %d\n", (void *)loop_start, loop_start->n);
		count++;

		loop_node = loop_start->next;
		while (loop_node != loop_start)
		{
			printf("[%p] %d\n", (void *)loop_node, loop_node->n);
			loop_node = loop_node->next;
			count++;
		}
		printf("->[%p] %d\n", (void *)loop_start, loop_start->n);
	}
	else
	{
		node = head;
		while (node != NULL)
		{
			printf("[%p] %d\n", (void *)node, node->n);
			node = node->next;
			count++;
		}
	}

	return (count);
}
