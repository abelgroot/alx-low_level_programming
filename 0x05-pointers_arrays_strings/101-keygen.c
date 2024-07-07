#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Return: 0 always
 */

int main(void)
{
	int target_checksum = 2772;
	char password[100];
	int current_checksum = 0;
	int i = 0;
	int next_char;

	srand(time(NULL));

	while (current_checksum < target_checksum - 126)
	{
		next_char = rand() % 94 + 33;
		if (current_checksum + next_char > target_checksum) 
		{
			next_char = target_checksum - current_checksum;
		}
		password[i++] = next_char;
		current_checksum += next_char;
	}

	next_char = target_checksum - current_checksum;
	if (next_char >= 33 && next_char <= 126)
	{
		password[i++] = next_char;
	}
	else
	{
		password[i++] = rand() % 94 + 33;
	}
	password[i] = '\0';

	printf("%s", password);

	return 0;
}

