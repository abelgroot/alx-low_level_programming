#include "main.h"
#include <stdlib.h>

/**
* _strdup - returns a point to a newly allocated space in memory,
* which contains a copy of the string given as parameter.
* @str: input string
*
* Return: pointer to the duplicated string,
* NULL if str is NULL or insuffient memory was available
*/

char *_strdup(char *str)
{
	char *dup_str;
	unsigned int length, i;

	if (str == NULL)
		return (NULL);
	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	dup_str = malloc((length + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
	{
		dup_str[i] str[i];
	}
	dup_str[length] = '\0';

	return (dup_str);
}
