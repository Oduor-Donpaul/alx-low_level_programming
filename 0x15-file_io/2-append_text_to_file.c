#include <unistd.h>
#include <fcntl.h>
#include "main.h"
#include <string.h>
/**
 * append_text_to_file - appends a text to a file
 * @filename: filename
 * @text_content: null terminated string
 * Return: 1 on success, oherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)

		write(fd, text_content, strlen(text_content));

	close(fd);

	return (1);
}
