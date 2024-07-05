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

	while (s[i] != '\0')
	{
		i++;
	}

	i--;

	while (j < i/2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
		j++;
	}
}
