#include "main.h"

/**
* print_diagonal - Prints a diagonal line on the terminal
* @n: Number of times the character '\' should be printed
* Return - void
*/
void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	int i = 0;

	while (i < n)
	{
		int spaces = 0;

		while (spaces < i)
		{
			_putchar(' ');
			spaces++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
}

