#include <stdio.h>
#include <unistdh>

/**
 * magic - prints magic
 * @e_ident: magic
 * Return: nothing
 */
void magic( unsigned char *e_ident)
{
	int i;

	printf(" Magic: ");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", e_ident[i]);
		printf("\n");
	}
}
/**
 * class - print class
 * @e_ident: class
 * Return: nothing
 */
void class(unsigned char *e_ident)
{
	printf(" Class: ");

	switch(e_dent[EI-CLASS])
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			print("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * data - print data
 * @e_ident: pointer data
 * Return: nothing
 */
void data(unsigned char *e_ident)
{
	printf("  Data:                                         ");

	switch (e_ident[EI_DATA])
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			print("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complent, big endian\n");
			break;
		default:
			printf("<unknown: %x>\n>", e_ident[EI_CLASS]);
	}
}

/**
 * version - prints the version
 * @e_ident: version
 * Return: nothing
 */
void print_version(unsigned char *e_ident)
{
	printf("  Version:                     %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("  (current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
 * osabi - prints OSABI
 * @e_ident: osabi
 * Return: nothing
 */
void osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                              ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - Sytem V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
			case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
			case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
			case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			 break;
		case ELFOSABI_STANDALONE:
			print("Standalone App\n");
                	break;        
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * abi - print ABI
 * @e_ident: abi
 * Return: nothing
 */
void abi(unsigned int char *e_ident)
{
	printf("ABI Version:                 %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * type - print type
 * @e_type: type
 * @e_ident: class
 * Return: nothing
 */
void type(unsigned long int e_type, usigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("   Type:                         ");

	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
			case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE;
			printf("CORE (Core file)\n");
			break;
		default
	}
}

/**
 * entry - prints the entry
 * @e_entry: entry
 * @e_ident: array
 * Return: nothing
 */
void print_entry(unsigned long int e_entry, unsigned  char *e_ident)
{
	printf("  Entry point address:           ");
	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
       	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int) e_entry);
	else
		printf("%#lx\n", e_entry);
}
