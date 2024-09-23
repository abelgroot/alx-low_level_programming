#include "main.h"

/**
* _strncat - concatenates n bytes from src to the end of dest
* @dest: destination string
* @src: source string
* @n: maximum number of bytes to append from src
* Return: pointer to the resulting string dest
*/
char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
	dest_ptr++;
	}

	while (*src != '\0' && n > 0)
	{
	*dest_ptr = *src;
	dest_ptr++;
	src++;
	n--;
	}

	*dest_ptr = '\0';

	return (dest);
}

