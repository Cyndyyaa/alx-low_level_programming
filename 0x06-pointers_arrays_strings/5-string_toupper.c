#include "main.h"

/**
 * string_toupper - char function
 * @str: String to be changed
 *
 * Description: changes lower case letters to uppercase
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		i++;
	}

	return (str);
}
