#include "main.h"
/* Header files go here */

/**
 * print_last_digit - print last digit
 *@n: the number to be checked
 *
 * Return: last digit
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n = -n;
	last_digit = n % 10;
	_putchar('0' + last_digit);
	return last_digit;
}
