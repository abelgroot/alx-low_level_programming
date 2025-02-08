#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: Argument count
* @argv: Argument vector
*
* Return: 0 on success, 1 if no argument or negative input
*/
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int total_coins = 0, money, i;

	if (argc != 2)
	{
		printf("Error\n");
	return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		total_coins += money / coins[i];
		money %= coins[i];
	}

	printf("%d\n", total_coins);

	return (0);
}
