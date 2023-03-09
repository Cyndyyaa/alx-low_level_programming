#include "main.h"

/**
 * factorial - Returns factorial of a given number.
 * @n: The number to find factorial of
 *
 * Return: factorial of n if > 0, - 1 if < 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else
		if (n >= 0 && n <= 1)
		{
			return (1);
		}

	n *= factorial(n - 1);

	return (n);
}
