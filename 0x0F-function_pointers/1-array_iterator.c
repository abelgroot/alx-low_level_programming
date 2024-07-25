#include "function_pointers.h"

/**
* array_iterator - fucntion that excutest a function
* given as a parameter on each element of an array.
*
* @array: integer type array input.
* @size: size_t type array size.
* @action: function  pionter take integer and return void.
*
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
