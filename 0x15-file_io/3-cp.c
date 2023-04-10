#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * main - copies content from file 1 to file 2
 * Return: nothing
 */
int main(int ac, char **av)
{
	int fd, fd_to, fd_close, fd_close_1;
	char buf[1024];
	ssize_t buf_read, buf_write;

	if (ac != 3)
	{
		dprintf(2, "Usage: file_fro file_to\n");
		exit (97);
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
		exit(99);
	}
	while ((buf_read = read(fd, buf, 1024)) > 0)
	{
		buf_write = write(fd_to, buf, buf_read);
		if (buf_write != buf_read)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			close(fd);
			close(fd_to);
			exit(99);
		}
	}

	fd_close = close(fd);
	fd_close_1 = close(fd_to);

	if (fd_close == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd);
		exit(100);
	}

	if (fd_close_1 == -1)
	{
		dprintf(2, "Error: Can't close fd %d", fd_to);
		exit(100);
	}
	return (0);
}
