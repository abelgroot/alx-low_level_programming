#include "main.h"
#include <limits.h>

/**
* _atoi - Converts a string to an integer.
* @s: The string to be converted.
*
* Return: The integer value of the string.
*/
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;
	int found_digit = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			sign *= 1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			if (num > (INT_MAX - (*s - '0')) / 10)
			{
				if (sign == 1)
					return (INT_MAX);
				else
					return (INT_MIN);
			}
			num = num * 10 + (*s - '0');
			found_digit = 1;
		}
		else if (found_digit)
		{
			break;
		}
		s++;
	}

	return (num * sign);
}
