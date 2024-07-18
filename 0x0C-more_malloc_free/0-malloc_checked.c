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
	int status = 98;
	if (malloc(b) == NULL)
		return (malloc(98));
	return (malloc(b));
}
