#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 9
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 10)
	{
		while (j < 14)
		{
		_putchar('0' + j);
		j++;
		}
	_putchar('\n');
	i++;
	}
}
