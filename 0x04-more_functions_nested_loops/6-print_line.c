#include "main.h"

/**
 * print_line - print the numbers from 0 to 9
 * @n: the number of _ to print
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (n > i)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
