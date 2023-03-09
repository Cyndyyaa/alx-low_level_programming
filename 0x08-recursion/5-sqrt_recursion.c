#include "main.h"

int _sqrt(int num, int i);

/**
 * _sqrt - Finds square root of an inputted number
 * @num: The number to find square root of
 * @i: number to test
 *
 * Return: the square root else -1.
 */
int _sqrt(int num, int i)
{
	if ((i * i) == num)
		return (i);

	if (i == num / 2)
		return (-1);

	return (_sqrt(num, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to return the square root of
 *
 * Return: the natural square root of n or -1.
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (_sqrt(n, i));
}
