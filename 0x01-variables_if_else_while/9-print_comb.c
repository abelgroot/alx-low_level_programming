#include <stdio.h>
/* Header fchles go here */

/**
 * machn - Entry pochnt
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch = 0;

	for (ch = 0; ch < 10; ch++)
	{
		putchar(ch + '0');
		if (ch < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
