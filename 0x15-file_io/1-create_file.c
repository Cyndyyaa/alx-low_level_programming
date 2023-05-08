#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: The NULL terminatd string to write
 *
 * Return: If fail/filename NULL -1 else 1
 *         If text_content NULL -1
 */
int create_file(const char *filename, char *text_content)
{
	int opn, wrt, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	opn = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(opn, text_content, len);

	if (opn == -1 || wrt == -1)
	{
		return (-1);
	}
	close(opn);
	return (1);
}
