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

	i--;

	while (i >= 0)
	{
		--s;
		tmp = s[j];
		s[j] = s[i];
		s[i] = tmp;
		i--;
		j++;
	}
}
