#include "main.h"
#define BUF_SIZE 64
/**
 * _perror - prints error message
 * @msg: message
 * Return: nothing
 */
void _perror(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}

/**
 * header_info - prints ELF info
 * @header: pointer to header struct
 * Return: nothing
 */
void header_info(Elf64_Ehdr *header)
{
	int i;

	printf("ELF Header:\n");
	printf("  Magic:  ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("  Class:		%s\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ?
				"ELF32" : "ELF64");
	printf("  Data:			%s\n", (header->e_ident[EI_DATA] == ELFDATA2MSB) ?
				"2's complement, big endian" : "2's complement, little endian");
	printf("  Version:		%d%s\n", header->e_ident[EI_VERSION],
				(header->e_ident[EI_VERSION] == EV_CURRENT) ? " (current)" : "");
	printf("  OS/ABI:		%d\n", header->e_ident[EI_OSABI]);
	printf("  ABI Version:		%d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:			%d\n", header->e_type);
	printf("  Entry point address:	%lx\n", header->e_entry);
	printf("\n");
}

/**
 * main - displays info contained in ELF file
 * @ac: ac
 * @av: av
 * Return: status
 */
int main(int ac, char *av[])
{
	int fd;
	ssize_t no_read;
	char buffer[64];
	Elf64_Ehdr header;

	if (ac != 2)
		_perror("Invalid number of arguments");
	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		_perror("Can't open file");
	no_read = read(fd, buffer, 64);
	if (no_read != BUF_SIZE || buffer[0] != ELFMAG0
			|| buffer[1] != ELFMAG1 || buffer[2] != ELFMAG2 || buffer[3] != ELFMAG3)
		_perror("Not ELF file");
	if (lseek(fd, 0, SEEK_SET) == -1)
		_perror("Can't seek file");
	no_read = read(fd, &header, sizeof(header));
	if (no_read != sizeof(header))
		_perror("Can't read ELF file");
	header_info(&header);
	if (close(fd) == -1)
		_perror("Can't close file");
	return (0);
}
