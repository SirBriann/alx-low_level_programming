#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>
#include <sys/mman.h>

/**
 * main -  program that displays the information contained in the ELF header
 * @argc: Argument counter
 * @argv: Argument vector holding our string
 * Return: Return content of the elf header
 */
int main(int argc, char *argv[])
{
	int fp;
	size_t i;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename", argv[0]);
		exit(98);
	}

	fp = open(argv[1], O_RDONLY);
	if (fp < 0)
	{
		fprintf(stderr,"Failed to open file '%s' : %s", argv[1], strerror(errno));
		exit(98);
	}

	if (read(fp, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Failed to read the ELF header from file '%s'", argv[1]);
		close(fp);
		exit(98);
	}
	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
		header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 ||
		header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "File '%s' is not an ELF File", argv[1]);
		close(fp);
		exit(98);
	}

	printf("ELF Header:\n");
	printf(" Magic:			");

	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}

	printf("\n");
	printf(" Class:				%d-bit\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);
	printf(" Data:				%s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf(" Version:			%d\n", header.e_ident[EI_VERSION]);
	printf(" OS/ABI:			%d\n", header.e_ident[EI_OSABI]);
	printf(" ABI Version:			%d\n", header.e_ident[EI_ABIVERSION]);
	printf(" Type:				%d\n", header.e_type);
	printf(" Entry point address:		0x%lx\n", header.e_entry);
	printf(" Format:			ELF%d\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? 32 : 64);

	close(fp);

	exit(0);
}
