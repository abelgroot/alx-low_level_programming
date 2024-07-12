#include "main.h"
/* Header files go here */

/**
 * _islower - check alphabet is lowercase or not function
 * @c: the character to check
 *
 * Return: 1 for sucess and 0 otherwise
 */
int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
