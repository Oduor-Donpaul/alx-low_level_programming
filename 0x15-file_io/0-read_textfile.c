#include "main.h"
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>

size_t read_textfile(const char *filename, size_t letters)
{
   int fd;
   int n;
   char *buffer;

   if (filename == NULL)
           return (0);

   fd = open(filename, O_RDONLY);

   if (fd == -1)
           return (0);

   buffer = malloc(sizeof(char) * (letters + 1));

   if (buffer == NULL)
   {
           close(fd);
           return (0);
   }

   n = read(fd, buffer, letters);

   if (n == -1)
   {
           free(buffer);
           close(fd);
           return (0);
   }

   write(STDOUT_FILENO, buffer, n);

   free(buffer);
   close(fd);
   return (n);
}
