#include <stdio.h>

/**
* main - prints all possible different combinations of three digits
*
* Description: The program prints all unique combinations of
* three different numbers
* Return: Always 0 (Success)
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if (i < 7 || (i == 7 && j < 8) || (i == 7 && j == 8 && k < 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

