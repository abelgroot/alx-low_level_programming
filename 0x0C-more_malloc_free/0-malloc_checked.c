#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - function that allocates memory using malloc.
* @b: unsinged int for size of memory
*
* Return: alocated memory size, 98 otherwise.
*/

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (malloc(b) == NULL)
		exit(98);
	return (ptr);
}
