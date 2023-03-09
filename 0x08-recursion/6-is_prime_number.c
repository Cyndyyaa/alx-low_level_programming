#include "main.h"

int _div(int num, int i);

/**
 * _div - Checks if a number is divisible
 * @num: The number to be checked
 * @i: The divisor
 *
 * Return: 0 if divisible else 1
 */

int _div(int num, int i)
{
	if (num % i == 0)
		return (0);

	if (i == num / 2)
		return (1);

	return (_div(num, i + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: number to be checked
 *
 * Return: 0 if not prime 1 if prime
 */

int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
	{
		return (0);
	}

	if (n >= 2 && n <= 3)
	{
		return (1);
	}

	return (_div(n, i));
}
