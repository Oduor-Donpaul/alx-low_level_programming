#include "main.h"

/**
 * _error - checks if error occured while reading
 * @fd: file descriptor
 * @fd_2: fd to
 * @av: av
 * Return: void
 */
void _error(int fd, int fd_2, char *av[])
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from the file %s\n", av[1]);
		exit(98);
	}
	if (fd_2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: can't read from the file %s\n", av[2]);
		exit(99);
	}
}


/**
 * main - coppies content from file1 to file 2
 * @ac: ac
 * @av: av
 * Return: int
 */
int main(int ac, char *av[])
{
	char buffer[1024];
	int fd, fd_2;
	ssize_t no_write, no_read = 1024;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	fd_2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	_error(fd, fd_2, av);
	while (no_read == 1024)
	{
		no_read = read(fd, buffer, 1024);
		if (no_read == -1)
			_error(-1, 0, av);
		no_write = write(fd_2, buffer, no_read);
		if (no_write == -1)
			_error(0, -1, av);
	}
	if (close(fd) == -1 || close(fd_2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (0);
}
