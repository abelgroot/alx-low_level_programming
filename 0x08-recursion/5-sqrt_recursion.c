#include "main.h"

/**
 * find_sqrt - Recursively calculates the square root of a number.
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if no natural square root.
 */
int find_sqrt(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (find_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (find_sqrt(n, 0));
}

