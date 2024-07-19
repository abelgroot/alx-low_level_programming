#include "main.h"
#include <stdlib.h>

/**
 * _isdigit - check if a character is a digit
 * @c: input character
 *
 * Return: 1 if true, 0 otherwise.
*/
int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
* is_number - checks if a string consists of only digits
* @str: the string to check
*
* Return: 1 if the string is a number, 0 otherwise
*/
int is_number(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (!_isdigit(str[i]))
		{
			return (0);
		}
	i++;
	}
	return (1);
}

/**
 * _strlen - return string length
 * @str: input string
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int length;

	length = 0;

	while (str[length])
	{
		length++;
	}
	return (length);
}


/**
 * _puts - prints a string, followed by new line.
 * @str: input string to print
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

/**
 * _error - prints an error message and exit with status 98
 */
void _error(void)
{
	_puts("Error");
	exit(98);
}

/**
* main - adds positive numbers passed as arguments
* @argc: the number of command-line arguments
* @argv: an array containing the command-line arguments
*
* Return: 0 if successful, 1 if an error occurs
*/
int main(int argc, char *argv[])
{
	int *result;
	unsigned int len1, len2;
	int len_res, i, j, carry, n1, n2, sum;

	if (argc != 3 || argv == NULL)
		_error();

	if (!is_number(argv[1]) || !is_number(argv[2]))
		_error();


	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len_res  = len1 + len2;

	result  = malloc(len_res * sizeof(int));

	if (result == NULL)
		_error();

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = argv[1][i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = argv[2][j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len_res && result[i] == 0)
		i++;

	if (i == len_res)
		_putchar('0');
	else
	{
		for (; i < len_res; i++)
			_putchar(result[i] + '0');
	}
	_putchar('\n');

	free(result);
	return (0);
}
