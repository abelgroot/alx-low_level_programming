#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
		if (!isdigit(str[i]))
		{
			return (0);
		}
	i++;
	}
	return (1);
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
	int sum = 0;
	int i;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
