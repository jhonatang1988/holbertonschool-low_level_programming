#include "holberton.h"
/**
 * main - copies content from one file to another file
 *
 * @ac: count of arguments
 * @av: arguments
 *
 * Return: always zero
 */
int main(int ac, char **av)
{
	char *buf = NULL;
	ssize_t w, r = 1024;
	int fd, fd2, c;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
		error_98(av[1]);
	fd2 = open(av[2], O_CREAT | O_TRUNC | O_APPEND | O_WRONLY, 0664);
	if (fd2 == -1)
		error_99(av[2]);
	buf = (char *)malloc(sizeof(char) * 1024);
	if (!buf)
		return (1);
	while (r == 1024)
	{
		r = read(fd, buf, 1024);
		if (r == -1)
			error_98(av[1]);
		w = write(fd2, buf, r);
		if (w == -1)
			error_99(av[2]);
	}
	free(buf);
	c = close(fd);
	if (c == -1)
		error_100(1, fd, fd2);
	c = close(fd2);
	if (c == -1)
		error_100(0, fd, fd2);
	return (0);
}
/**
 * error_98 - exit 98
 *
 * @av1: first argument
 *
 * Return: nothing
 */
void error_98(char *av1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
		, av1);
	exit(98);

}
/**
 * error_99 - exit 99
 *
 * @av2: second argument
 *
 * Return: nothing
 */
void error_99(char *av2)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av2);
	exit(99);
}
/**
 * error_100 - exit 100
 *
 * @fdcase: fd1 or fd2
 * @fd1: fd integer
 * @fd2: fd2 integer
 *
 * Return: nothing
 */
void error_100(int fdcase, int fd1, int fd2)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n"
		, fdcase ? fd1 : fd2);
	exit(100);
}
