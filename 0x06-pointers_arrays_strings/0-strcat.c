#include "main.h"

/**
 * _strcat - char function
 * @src: pointer value of string to be concatenated
 * @dest: pointer value of string to concatenate to
 *
 * Description: Concatenates two strings
 *
 * Return: dest (the resulting string)
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i++])
	{
		j++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[j++] = src[i];
	}

	return (dest);
}

