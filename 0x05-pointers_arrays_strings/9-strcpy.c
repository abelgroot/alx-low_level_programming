#include "main.h"

/**
* _strcpy - copies the string src including the terminating null byte to dest.
* @dest: destination string
* @src: source string
*
* Return: a string
*/

char *_strcpy(char *dest, char *src)
{
	char *ptr;

	ptr = dest;

	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (ptr);
}
