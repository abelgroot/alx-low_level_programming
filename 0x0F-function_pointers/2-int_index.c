#include "function_pointers.h"

/**
* int_index - function taht searches for an integer.
* @array: input array to be searched
* @size: number of elements in array.
* @cmp: point to the function to be used for compare values.
*
* Return: index if integer found, -1 otherwise.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		int i, result;

		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);

			if (result)
				return (i);
		}

		return (-1);
	}
	return (-1);
}
