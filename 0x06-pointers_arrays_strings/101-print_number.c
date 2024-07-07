#include "main.h"
#include <limits.h>

/**
* print_number - Prints an integer using _putchar
* @n: The integer to print
*/
void print_number(int n)
{
	int divisor, is_zero, is_min, digit;

	divisor = 1;
	is_zero = 1;
	is_min = 0;

	if (n == INT_MIN)
	{
		is_min = 1;
		n = INT_MIN + 1;
	}

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		digit = n / divisor;
		if (digit != 0 || !is_zero)
		{
			_putchar('0' + digit);
			is_zero = 0;
		}
	n %= divisor;
	divisor /= 10;
	}

	if (is_min)
	{
		_putchar('8');
	}
}
