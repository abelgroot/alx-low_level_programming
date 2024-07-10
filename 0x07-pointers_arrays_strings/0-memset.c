#include "main.h"

/**
* _memset - fills the first n bytes of the memory with the constant byte b
* @s: int memory address
* @b: the byte that need to be used for replacement
* @n: the number of bytes
*
* Return: the memory address string
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
