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
 * _type - checks type
 * @type: type
 * Return: pointer
 */
char *_type(Elf64_Half type)
{
	switch (type)
	{
	case ET_NONE: return "NONE (Unknown type)";
	case ET_REL: return "REL (Relocatable file)";
	case ET_EXEC: return "EXEC (Executable file)";
	case ET_DYN: return "DYN (Shared object file)";
	case ET_CORE: return "CORE (Core file)";
	default: return "Unknown";
	}
}
/**
 * _osabi - gets OS/ABI name
 * @osabi: osabi
 * Return: pointer
 */
char *_osabi(unsigned char osabi)
{
	switch (osabi)
	{
	case ELFOSABI_SYSV: return "UNIX - System V";
	case ELFOSABI_HPUX: return "UNIX - HP-UX";
	case ELFOSABI_NETBSD: return "UNIX - NetBSD";
	case ELFOSABI_LINUX: return "UNIX - Linux";
	case ELFOSABI_SOLARIS: return "UNIX - Solaris";
	case ELFOSABI_AIX: return "UNIX - AIX";
	case ELFOSABI_IRIX: return "UNIX - IRIX";
	case ELFOSABI_FREEBSD: return "UNIX - FreeBSD";
	case ELFOSABI_TRU64: return "UNIX - TRU64";
	case ELFOSABI_MODESTO: return "Novell - Modesto";
	case ELFOSABI_OPENBSD: return "UNIX - OpenBSD";
	default: return "Unknown";
	}
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
	printf("  Class:                %s\n", (header->e_ident[EI_CLASS]
				== ELFCLASS32) ? "ELF32" : "ELF64");
	printf("  Data:	                %s\n", (header->e_ident[EI_DATA] ==
				ELFDATA2MSB) ? "2's complement, big endian" :
			"2's complement, little endian");
	printf("  Version:              %d%s\n", header->e_ident[EI_VERSION],
				(header->e_ident[EI_VERSION] == EV_CURRENT) ? " (current)" : "");
	printf("  OS/ABI:               %s\n", _osabi(header->e_ident[EI_OSABI]));
	printf("  ABI Version:          %d\n", header->e_ident[EI_ABIVERSION]);
	printf("  Type:	                %s\n", _type(header->e_type));
	printf("  Entry point address:  0x%x\n", (int)header->e_entry);
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
