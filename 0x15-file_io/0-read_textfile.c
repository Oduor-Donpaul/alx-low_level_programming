#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "main.h"

/**
 * read_textfile - reaads a file
 * @filename: name
 * @letters: letters
 * Return: ssize_t
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        FILE *ptr;
        size_t i;

        char *ch = 0;
        ssize_t j;

        ptr = fopen(filename, O_RDONLY);

        if (ptr == NULL)
                return 0;

        ch = malloc(sizeof(char) * (letters + 1));

        if (ch == NULL)
        {
                fclose(ptr);
                return (0);
        }

        i = fread(ch, 1, letters, ptr);

        if (i == 0 && !feof(ptr))
        {
                free(ch);
                fclose(ptr);
                return (0);
        }

        j = write(STDOUT_FILENO, ch, i);

        if (j == -1 || j != i)
        {
                free(ch);
                fclose(ptr);
                return (0);
        }

        free(ch);
        fclose(ptr);

        return (i);
}

