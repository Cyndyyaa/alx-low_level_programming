#include "main.h"

/**
 * _pow_recursion - Raises x to the power of y.
 * @x: number to be raised.
 * @y: power of
 *
 * Return: x raised to power of y.
 */

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	x *= _pow_recursion(x, y - 1);

	return (x);
}
