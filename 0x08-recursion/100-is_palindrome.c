#include "main.h"
#include <string.h>

/**
* _strlen_recursion - Calculates the length of a string recursively.
* @s: The string to calculate the length of.
*
* Return: Length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
* check_palindrome - Helper function to check if a
* string is palindrome recursively.
* @s: The string to check.
* @left: Left index of the string.
* @right: Right index of the string.
*
* Return: 1 if @s is a palindrome, 0 otherwise.
*/
int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);

	if (s[left] != s[right])
		return (0);

	return (check_palindrome(s, left + 1, right - 1));
}

/**
* is_palindrome - Checks if a string is a palindrome.
* @s: The string to check.
*
* Return: 1 if @s is a palindrome, 0 otherwise.
*/
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}
