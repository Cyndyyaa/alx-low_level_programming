#include "main.h"

/**
 * reverse_array - void function
 * @a: int array to be reversed
 * @n: size of array
 *
 * Description: prints a reversed int array
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = n - 1; i >= n / 2; i--)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
	}
}
