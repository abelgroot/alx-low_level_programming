#include "main.h"

/**
*
*
*
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	mask = mask << index;

	*n = (*n | mask);
	return (1);
	
}
