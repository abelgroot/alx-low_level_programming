#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - Prints anything based on the format specifier.
* @format: A list of types of arguments passed to the function.
*
* Format specifiers:
* 'c': char
* 'i': integer
* 'f': float
* 's': string (if the string is NULL, print (nil))
* Any other char should be ignored.
*/
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0, j;
	char *str, *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;

		while ("cifs"[j])
		{
			if (format[i] == "cifs"[j])
			{
				printf("%s", separator);
				switch (format[i])
				{
					case 'c':
						printf("%c", va_arg(args, int));
						break;
					case 'i':
						printf("%d", va_arg(args, int));
						break;
					case 'f':
						printf("%f", va_arg(args, double));
						break;
					case 's':
						str = va_arg(args, char *);
						if (str == NULL)
							str = "(nil)";
						printf("%s", str);
						break;
				}
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
