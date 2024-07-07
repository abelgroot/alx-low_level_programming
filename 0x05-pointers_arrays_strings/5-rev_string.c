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

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = 0, i--; j < i; j++, i--)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
	}
}
