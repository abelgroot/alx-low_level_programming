#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: the string to modify
*
* Return: a pointer to the resulting string
*/
char *cap_string(char *str)
{
	int i = 0;
	int capitalize_next = 1;

	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		if (capitalize_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
		}

		capitalize_next = 0;

		for (int j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize_next = 1;
				break;
			}
		}

		i++;
	}

	return (str);
}

