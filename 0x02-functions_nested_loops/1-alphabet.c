#include <stdio.h>
#include "main.h"
/* Header files go here */

/**
 * _alphabet - print alphabet function 
 *
 * Return: Always void (Success)
 */
void _alphabet(void)
{
	char i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
