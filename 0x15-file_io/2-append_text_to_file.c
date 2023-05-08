#include "main.h"

/**
 * append_text_to_file - appends text_content to filename
 * @filename: filename
 * @text_content: a null terminated string
 * Return: 1 if successful or -1 on falure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		n = write(fd, text_content, strlen(text_content));
		if (n == -1)
		{
			close(fd);
			return (-1);
		}

	}
	close(fd);

	return (1);
}
