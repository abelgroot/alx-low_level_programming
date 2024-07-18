#include "main.h"
#include <stdlib.h>

/**
* _calloc - function that allocates memory for
* any array, using malloc.
* @nmemb: elements of array
* @size: bytes for each element
*
* Return: pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = 0;

	return (array);
}
