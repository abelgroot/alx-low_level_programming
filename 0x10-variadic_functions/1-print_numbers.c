#include "variadic_functions.h"
#include <stdio.h>
/**
* print_numbers - print numbers followed by a new line.
* @separator: string to be printed between numbers.
* @n: number of integers passed to the function.
*
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(args);
	printf("\n");
}
