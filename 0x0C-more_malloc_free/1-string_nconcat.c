#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function that give length of string
 * @str: input string
 *
 * Return: string length
 */

unsigned int _strlen(char *str)
{
	unsigned int length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}
/**
* string_nconcat - function that concatenates two strings.
* @s1: first input string
* @s2: second input string
* @n: number of character to copy
*
* Return: concatenated string, NULL otherwise
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
		len1 = _strlen(s1);
	if (s2 != NULL)
		len2 = _strlen(s2);

	if (n <= len2)
		len2 = n;

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
