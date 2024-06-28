#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 9
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	while (i < 10)
	{
		j = 0;
		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar('1');
				k = 10;
			}
		_putchar('0' + j - k);
		j++;
		}
	_putchar('\n');
	i++;
	k = 0;
	}
}
