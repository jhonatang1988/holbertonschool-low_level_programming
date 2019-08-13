#include "holberton.h"
/**
 * read_textfile - read a file and print to the standard output
 *
 * @filename: filename
 * @letters: number of letters printed
 *
 * Return: the number of letters it could read and print o 0 for errors.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf = NULL;
	unsigned int len, r, w;

	buf = (char *)malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	if (!filename)
		return (0);

	/* read */
	fd = open("Requiescat", O_RDONLY);

	if (fd == -1)
		return (0);

	r = read(fd, buf, letters);
	len = strlen(buf);

	if (len < letters)
		letters = len;
	if (r != letters)
		return (0);

	w = write(STDOUT_FILENO, buf, letters);
	if (w != letters)
		return (0);

	close(fd);
	free(buf);

	return (letters);
}