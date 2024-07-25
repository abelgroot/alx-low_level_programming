#include <stdio.h>
#include <stdlib.h>

/**
* main - prints its own opcodes
* @argc: argument count
* @argv: argument vector
*
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int bytes, i;
	char *array;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02x", array[i] & 0xFF);
		if (i != bytes - 1)
		printf(" ");
	}

	printf("\n");

	return (0);
}
