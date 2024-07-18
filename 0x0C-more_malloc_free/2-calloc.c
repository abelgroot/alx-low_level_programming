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
	void *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	while (i < size * nmemb)
	{
		*((char *)array + i) = 0;
		i++;
	}
	return (array);
}
