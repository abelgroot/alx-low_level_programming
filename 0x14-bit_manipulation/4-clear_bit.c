#include "main.h"
#include "limits.h"

/**
* clear_bit - function that clear the value of a bit to 1 at a given index.
* @n: input number.
* @index: index to set to 1.
*
* Return: 1 is successful, -1 otherwise.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= 64)
		return (-1);
	*n = (*n & ~(mask << index));
	return (1);
}
