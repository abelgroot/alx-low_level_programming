#include "main.h"
/* Header files go here */

/**
 * _isalpha - check alphabet is lowercase or not function
 * @c: the character to check
 *
 * Return: 1 for sucess and 0 otherwise
 */
int _isalpha(int c)
{
	while ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
