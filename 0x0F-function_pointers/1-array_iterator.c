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
	while (size >= 0)
	{
		action(array[size]);
		size--;
	}
}
