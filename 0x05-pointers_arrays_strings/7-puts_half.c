#include "main.h"

/**
* puts_half - prints half of the string starting from n = (length_of_str - 1)/2
* @str: input string
*/
void puts_half(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	if (i % 2)
	{
		j = i / 2;
	}
	else
		j = (i - 1) / 2;

	j--;
	for (; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}

