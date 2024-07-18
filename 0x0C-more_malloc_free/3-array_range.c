#include "main.h"
#include <stdlib.h>

/**
* array_range - function that creates an array of integers.
* @min: minimum value
* @max: maximum value
*
* Return: a pointer to the newly created array.
*/

int *array_range(int min, int max)
{
	int *ptr;
	int size, i;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(size * sizeof(int));
	
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= max; i++)
		ptr[i] = min + i;

	return (ptr);
}
