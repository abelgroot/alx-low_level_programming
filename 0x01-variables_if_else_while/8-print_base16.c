#include <stdio.h>
/* Header files go here */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = '0';
	char c = 'a';

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');
	return (0);
}
