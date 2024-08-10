#include "main.h"

/**
* get_bit - function that returns the value of a bit at a given index.
* @n: input number.
* @index: the index of the bit we are going to return.
*
* Return: value of the bit at index, -1 otherwise(error occured).
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned long int shifted = n >> index;

	if (shifted == 0)
		return (0);

	return (shifted & mask);
}
