#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFF_SIZE 1024

void file_error(int fd, int fd_to, char **av);

/**
 * file_error - checks error
 * @av: argument vector
 * @fd: file descriptor from
 * @fd_to: file descriptor to
 * Return: nothing
 */
void file_error(int fd, int fd_to, char **av)
{
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
}

/**
 * main - copies content from file 1 to file 2
 * @ac: argument count
 * @av: ARGUMENT VECTOR
 * Return: nothing
 */
int main(int ac, char **av)
{
	char buf[BUFF_SIZE];
	int fd, fd_to;
	ssize_t buf_read, buf_write;

	if (ac != 3)
	{

		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);

	}
	fd = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_error(fd, fd_to, av);

	buf_read = 1024;
	while (buf_read == 1024)
	{
		buf_read = read(fd, buf, 1024);
		if (buf_read == -1)
			file_error(-1, 0, av);
		buf_write = write(fd_to, buf, buf_read);
		if (buf_write == -1)
		{
			file_error(0, -1, av);
		}
	}
	close(fd);
	close(fd_to);
	if (close(fd) == -1 || close(fd_to) == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}
	return (0);
}
