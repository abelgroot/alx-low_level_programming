#include "main.h"

/**
* _strspn - gets the length of a prefix substring
* @s: the input string
* @accept: substring
*
* Return: unsinged int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int i, j;
	int found;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (count);
		}
		count++;
	}
	return (count);
}
