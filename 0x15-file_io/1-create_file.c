#include <string.h>
#include "main.h"
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - writes text content to file
 * @filename: file
 * @text_content: null terminated string
 * Return: 1 if success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	long int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
