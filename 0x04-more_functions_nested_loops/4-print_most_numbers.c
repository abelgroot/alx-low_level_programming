#include "main.h"

/**
 * print_most_numbers - print the numbers from 0 to 9
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if (i == '2' || i == ''4)
		{
			continue;
		}
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
