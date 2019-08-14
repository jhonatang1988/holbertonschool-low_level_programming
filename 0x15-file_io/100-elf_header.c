#include "holberton.h"
/**
 * main - read the elf header
 *
 *
 *
 *
 *
 *
 */
int main(int ac, char **av)
{
	int fd;
	char buf[16];
	char elf[1];
	ssize_t r;

	if (ac != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO ,"Error in steroids: cannot read the file and thats it");
		exit(98);
	}
	r = read(fd, buf, 4);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: sorry! could read it");
		exit(98);
	}
	r = lseek(fd, 1, SEEK_SET);
	r = read(fd, elf, 1);

	if (elf[0] != 'E')
		exit(98);

	close(fd);

	return (0);
}
