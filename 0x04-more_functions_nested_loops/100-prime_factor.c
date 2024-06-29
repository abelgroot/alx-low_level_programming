#include <stdio.h>
#include <math.h>

/**
* main - Finds and prints the largest prime factor of the number 612852475143
*
* Return: Always 0 (Success)
*/
int main(void)
{
	long number;
	long factor;
	long largest_factor;

	number = 612852475143;
	factor = 2;
	largest_factor = 0;

	while (number > 1)
	{
		if (number % factor == 0)
		{
			largest_factor = factor;
			number /= factor;
			while (number % factor == 0)
			{
				number /= factor;
			}
		}
		factor++;
		if (factor * factor > number && number > 1)
		{
			largest_factor = number;
			break;
		}
	}

	printf("%ld\n", largest_factor);

	return (0);
}

