#include "main.h"

/**
* _strchr - locates a character in a string
* @s: input string
* @c: charcter to be located
*
* Return: the character located
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return null;
}
