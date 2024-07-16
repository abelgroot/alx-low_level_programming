#include "main.h"
#include <stdlib.h>

/**
* count_words - Helper function to count the number of words in a string
* @str: The string to count words from
*
* Return: The number of words in the string
*/
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
* word_len - Finds the length of the next word in the string
* @str: The string to check
*
* Return: The length of the next word
*/
int word_length(char *str)
{
	int len = 0;

	while (str[len] && str[len] != ' ')
		len++;

	return (len);
}

/**
* allocate_word - Allocates memory for a word and copies it
* @str: The string to copy the word from
* @len: The length of the word
*
* Return: Pointer to the newly allocated word
*/
char *allocate_word(char *str, int len)
{
	char *word = malloc((len + 1) * sizeof(char));
	int i;

	if (word == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		word[i] = str[i];
	word[i] = '\0';

	return (word);
}

/**
* strtow - Splits a string into words
* @str: The string to split
*
* Return: Pointer to an array of strings (words), or NULL if it fails
*/
char **strtow(char *str)
{
	char **words;
	int i, k, word_count, word_len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < word_count; i++)
	{
		while (str[k] == ' ')
			k++;

		word_len = word_length(&str[k]);

		words[i] = allocate_word(&str[k], word_len);
		if (words[i] == NULL)
		{
			while (i > 0)
				free(words[--i]);
			free(words);
			return (NULL);
		}
		k += word_len;
	}
	words[i] = NULL;

	return (words);
}
