#include "holberton.h"
/**
 * append_text_to_file - append text at the end of a file
 *
 * @filename: name of the file
 * @text_content: text to append
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, w;

	if (!filename)
		return (-1);

	if (!text_content)
	{
		fd = open(filename, O_WRONLY
			  | O_APPEND);
		if (fd == -1)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		fd = open(filename, O_WRONLY
			  | O_APPEND);
		if (fd == -1)
		{
			return (-1);
		}
		len = strlen(text_content);

		w = write(fd, text_content, len);
		if (w == -1)
			return (-1);
	}

	return (1);
}
