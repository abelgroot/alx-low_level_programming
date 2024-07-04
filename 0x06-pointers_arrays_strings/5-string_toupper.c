	#include "main.h"

	/**
	* string_toupper - changes all lowercase letters of a string to uppercase
	* @str: a string input
	* return: a pointer to the uppercase string.
	*/

char *string_toupper(char *str)
{
	char *upr = str;

	while (*upr)
	{
  	if (*upr >= 'a' && *upr <= 'z')
	  {
	    *upr -= 32;
	  }
	  upr++;
	}

	return (str);
}
