#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of  any array of integers followed by newline
* @a: integer array
* @n: integer elements
*
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
