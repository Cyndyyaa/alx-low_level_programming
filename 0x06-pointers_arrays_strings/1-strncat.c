#include "main.h"

/**
 * _strncat - char function
 * @src: pointer value of string to be concatenated
 * @dest: pointer value of string to concatenate to
 * @n: most number of bytes to use
 *
 * Description: Concatenates two strings
 *
 * Return: dest (the resulting string pointer)
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
