#include "main.h"
/* Header files go here */

/**
 * print_alphabet - print alphabet function
 *
 * Return: Always void (Success)
 */
void print_alphabet(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
