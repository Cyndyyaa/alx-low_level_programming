#include <stdio.h>

/**
 * main -function
 *
 * Description: prints all possible cobinations of single-digit numbers
 *
 * Return: returns (0) on success
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j != i && i < j)
			{
				putchar('0' + (i % 10));
				putchar('0' + (j % 10));

				if (j == 9  && i == 8)
				{
					continue;
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
