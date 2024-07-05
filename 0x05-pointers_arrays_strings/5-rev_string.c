#include "main.h"

/**
* rev_string - reverse a string
* @s: input string
*
*/

void rev_string(char *s)
{
	int i, j;
	char tmp;

	i = 0;
	j = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}

	while (i >= 0)
	{
		tmp = s[i];
		s[j] = s[i];
		s[i] = tmp;
	}
}
