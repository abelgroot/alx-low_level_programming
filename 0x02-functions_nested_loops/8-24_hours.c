#include "main.h"
/* Header files go here */

/**
*jack_bauer- print last digit
*
* Return: print void
*/
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
		_putchar('0' + (hour / 10));
		_putchar('0' + (hour % 10));
		_putchar(':');
		_putchar('0' + (minute / 10));
		_putchar('0' + (minute % 10));
		_putchar('\n');
		}
	}
}
