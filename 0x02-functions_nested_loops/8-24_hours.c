#include "main.h"
/* Header files go here */

/**
 *jack_bauer - print every minute of 24 hr
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hour, minute;

    for (hour = 0; hour < 24; hour++)
    {
        for (minute = 0; minute < 60; minute++)
        {
            // Print hour tens digit
            _putchar('0' + (hour / 10));
            // Print hour units digit
            _putchar('0' + (hour % 10));
            _putchar(':');
            // Print minute tens digit
            _putchar('0' + (minute / 10));
            // Print minute units digit
            _putchar('0' + (minute % 10));
            _putchar('\n');
        }
    }
}
