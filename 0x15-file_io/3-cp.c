#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFF_SIZE 1024
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
		dprintf(2, "Usage: cp file_from file_to");
		exit(97);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		close(fd);
		exit(99);
	}
	while ((buf_read = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf_write = write(fd_to, buf, buf_read);
		if (buf_write == -1 || buf_write != buf_read)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd);
			close(fd_to);
			exit(99);
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
