#include "main.h"

/**
 * _isupper - takes letter check the character is uppercase
 * @c:  letter to check
 *
 * Return: 1 if character is  uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
