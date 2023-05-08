#include "main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * read_textfile - reads and prints characters from a textfile
 * @filename: pointer to the file
 * @letters: number of letters to be read and printed
 * Return: number of letters read and printed
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int no_read, fd;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	no_read = read(fd, buf, letters);
	if (no_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	write(STDOUT_FILENO, buf, no_read);
	free(buf);
	close(fd);
	return (no_read);
}
