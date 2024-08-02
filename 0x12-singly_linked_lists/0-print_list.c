#include "lists.h"

/**
* print_list - function that prints all the elements of a list_t list.
* @h: constant list_t list
*
* Return: the number of nodes.
*/

size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr;

	ptr = h;
	if (ptr->next  == NULL)
		return (0);

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s \n", ptr->len, ptr->str);
		ptr = ptr->next;
		n++;
	}
	return (n);
}

