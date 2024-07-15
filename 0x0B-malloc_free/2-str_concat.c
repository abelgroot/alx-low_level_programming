#include "main.h"
#include <stdlib.h>

/**
* str_concat - concatenates two strings
* @s1: the first string
* @s2: the second string
*
* Return: a pointer to the newly allocated space in memory containing
*         the concatenated strings, or NULL if it fails
*/
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
	len1 = _strlen(s1);
	if (s2 != NULL)
	len2 = _strlen(s2);

	concat_str = malloc((len1 + len2 + 1) * sizeof(char));
	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < len2; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';

	return (concat_str);
}

