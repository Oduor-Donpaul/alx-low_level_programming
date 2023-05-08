#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <sys/types.h>
#include <elf.h>

void _perror(char *msg);
void header_info(Elf64_Ehdr *header);
int append_text_to_file(const char *filename, char *text_content);
void _error(int fd, int fd_2, char *av[]);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);

#endif
