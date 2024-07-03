#include "main.h"

/**
* _strcmp - compares two strings
* @s1: first string
* @s2: second string
* Return: negative value if s1 < s2, positive value if s1 > s2, 0 if equal
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return *(unsigned char *)s1 - *(unsigned char *)s2;
}

