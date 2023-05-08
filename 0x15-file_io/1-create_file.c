#include "main.h"

/**
 * create_file - creates a file and writes text_content to it
 * @filename: filename
 * @text_content: a null terminated string to be written
 * Return: 1 on success orthewise -1
 */

int create_file(const char *filename, char *text_content)
{
	long int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		write(fd, text_content, strlen(text_content));
	} else
		write(fd, "", 0);
	close(fd);
	return (1);
}
