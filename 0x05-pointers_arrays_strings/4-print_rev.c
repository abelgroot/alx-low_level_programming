#include "main.h"

/**
* print_rev - prints a string, in reverse, followed by a newline
* @s: input string
*
*/

void print_rev(char *s)
{
	int size;

	size = 0;

	while (*s != '\0')
	{
		s++;
		size++;
	}
	size = size--;

	while (size >= 0)
	{
		_putchar(*s);
		size--;
		s--;
	}
	_putchar('\n');
}
