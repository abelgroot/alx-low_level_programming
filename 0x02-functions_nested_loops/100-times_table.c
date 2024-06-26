#include "main.h"
#include <stdio.h>

/**
* print_times_table - Prints the n times table, starting from 0
* @n: The number up to which the times table should be printed (0 <= n <= 15)
*/
void print_times_table(int n)
{
	if (n < 0 || n > 15)
		return;
	
	int row, col, product;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			product = row * col;

			if (col == 0)
			{
				printf("%d", product);
			}
			else
			{
				printf(", ");

				if (product < 10)
					printf("   ");
				else if (product < 100)
					printf("  ");
				else
					printf(" ");

				printf("%d", product);
			}
		}
		printf("\n");
	}
}
