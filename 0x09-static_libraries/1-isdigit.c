#include "main.h"

/**
 * _isdigit - checks if the character is digit from 0 to 9
 * @c: the character to be checked
 *
 * Return: 1 if c is digit, o otherwise.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
