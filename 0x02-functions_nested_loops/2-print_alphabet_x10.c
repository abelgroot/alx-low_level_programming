#include "main.h"
/* Header files go here */

/**
 * print_alphabet_x10 - print alphabet function
 *
 * Return: Always void (Success)
 */
void print_alphabet_x10(void)
{
	char i = 'a';
	char j = 0;

	while (j <= 9)
	{
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
	_putchar('\n');
	j++;
	i = 'a';
	}
}
