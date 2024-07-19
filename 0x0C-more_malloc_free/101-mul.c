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
	unsigned int length = 0;

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
 * _error - prints an error message and exits with status 98
 */
void _error(void)
{
	_puts("Error");
	exit(98);
}

/**
 * initialize_result - initializes the result array with zeros
 * @result: the result array
 * @len_res: the length of the result array
 */
void initialize_result(int *result, int len_res)
{
	int i;

	for (i = 0; i < len_res; i++)
	{
		result[i] = 0;
	}
}

/**
 * multiply_numbers - multiplies two numbers represented as strings
 * @argv: the array of command-line arguments
 * @result: the result array to store the multiplication result
 * @len1: the length of the first number string
 * @len2: the length of the second number string
 */
void multiply_numbers(char *argv[], int *result, int len1, int len2)
{
	int i, j, carry, n1, n2, sum;

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
}

/**
 * print_result - prints the result array
 * @result: the result array
 * @len_res: the length of the result array
 */
void print_result(int *result, int len_res)
{
	int i = 0;

	while (i < len_res && result[i] == 0)
	{
		i++;
	}

	if (i == len_res)
	{
		_putchar('0');
	}
	else
	{
		for (; i < len_res; i++)
		{
			_putchar(result[i] + '0');
		}
	}
	_putchar('\n');
}

/**
 * main - multiplies two positive numbers passed as arguments
 * @argc: the number of command-line arguments
 * @argv: an array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if an error occurs
 */
int main(int argc, char *argv[])
{
	int *result;
	unsigned int len1, len2;
	int len_res;

	if (argc != 3 || argv == NULL)
		_error();

	if (!is_number(argv[1]) || !is_number(argv[2]))
		_error();

	/* Check for multiplication by zero */
	if (argv[1][0] == '0' || argv[2][0] == '0')
	{
		_putchar('0');
		_putchar('\n');
		return (0);
	}

	len1 = _strlen(argv[1]);
	len2 = _strlen(argv[2]);
	len_res = len1 + len2;

	result = malloc(len_res * sizeof(int));
	if (result == NULL)
		_error();

	initialize_result(result, len_res);
	multiply_numbers(argv, result, len1, len2);
	print_result(result, len_res);

	free(result);
	return (0);
}

