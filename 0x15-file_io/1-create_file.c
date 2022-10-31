#include "main.h"

/**
 * create_file - create a file
 * @filename: A poiter to the name of the file to create
 * @text_content: A pointer to the string to write to file
 *
 * Return: if the function fails - - 1,
 *	otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		return (-1);
	{
		for (len = 0; text_content[len];)
		len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0000);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
