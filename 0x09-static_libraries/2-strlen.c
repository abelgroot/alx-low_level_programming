#include "main.h"

/**
* _strlen - return length of a string
* @s: an input string
*
* Return: integer value of the string length
*/

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
