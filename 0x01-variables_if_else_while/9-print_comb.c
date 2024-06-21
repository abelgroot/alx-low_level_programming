#include <stdio.h>
/* Header files go here */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = '0';

	for (ch = '0'; ch <= '9'; ch++)
	{
		putchar(ch);

		if (ch == '9')
		{
			continue;
		}
		else
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
	return (0);
}
