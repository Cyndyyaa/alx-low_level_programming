#include <stdio.h>

/**
 * main -function
 *
 * Description: prints lowercase alphabet in reverse
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int i;

	for (i = 122; i > 96; i--)
	{
		putchar(i);
	}

	putchar('\n');

	return (0);
}
