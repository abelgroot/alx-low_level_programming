#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to modify
 *
 * Return: a pointer to the resulting string
 */

char *string_toupper(char *str)
{
	char *upr = str;

	while (*upr)
	{
		if (*upr >= 'a' && *upr <= 'z')
		{
			*upr -= 32;
		}
		upr++;
	}

	return (str);
}
