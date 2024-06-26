#include "main.h"
/* Header files go here */

/**
 * _islower - check alphabet is lowercase or not function
 *
 * Return: 1 for sucess and 0 otherwise
 */
int _islower(int c)
{
	while (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
