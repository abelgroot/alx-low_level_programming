#include "main.h"

/**
 * add - Adds two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of a + b
 */
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Subtracts second integer from the first
 * @a: first integer
 * @b: second integer
 *
 * Return: result of a - b
 */
int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Multiplies two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: result of a * b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides first integer by the second
 * @a: first integer
 * @b: second integer
 *
 * Return: result of a / b, or 0 if division by zero
 */
int div(int a, int b)
{
	if (b == 0)
		return (0); /* Avoid division by zero */
	return (a / b);
}

/**
 * mod - Returns remainder of division
 * @a: first integer
 * @b: second integer
 *
 * Return: result of a % b, or 0 if division by zero
 */
int mod(int a, int b)
{
	if (b == 0)
		return (0); /* Avoid division by zero */
	return (a % b);
}
