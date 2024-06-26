#include "main.h"
/* Header files go here */

/**
 * print_sign - check number is positive or negative
 * @n: the number to check
 *
 * Return: 1 for positive and -1 negative 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
