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

	while (*s)
	{
		s++;
		size++;
	}
	
	_putchar(*s);
	_putchar('\n');

	while (size >= 0)
	{
		--s;
		_putchar(*s);
		size--;
	}
	_putchar('\n');
}
