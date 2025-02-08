#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_char - Prints a char.
 * @args: The argument list.
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - Prints an integer.
 * @args: The argument list.
 */
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - Prints a float.
 * @args: The argument list.
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string.
 * @args: The argument list.
 */
void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

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
	char *separator = "";
	void (*func[])(va_list) = {print_char, print_int, print_float, print_string};
	char *formats = "cifs";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		while (formats[j])
		{
			if (format[i] == formats[j])
			{
				printf("%s", separator);
				func[j](args);
				separator = ", ";
			break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
