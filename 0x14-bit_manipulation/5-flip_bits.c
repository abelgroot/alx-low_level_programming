#include "main.h"

/**
* flip_bits - function that returns the number of bits you would need
* to flip to get from one number to another.
* @n: first input number.
* @m: second input number.
*
* Return: number of bits flipped.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int count = 0;

	while (mask)
	{
		count += (mask & 1);
		mask = mask >> 1;
	}
	return (count);
}
