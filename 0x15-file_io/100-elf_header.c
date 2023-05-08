#include <elf.h>
#include <s/types.h>
#include <s/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_ad - prints adess
 * @ptr: pointer
 * Return: void.
 */

void print_ad(char *ptr)
{
	int i, bg;
	char s;

	printf("  Entry point adess:               0x");

	s = ptr[4] + '0';
	if (s == '1')
	{
		bg = 26;
		printf("80");
		for (i = bg; i >= 22; i--)
		{
			if (ptr[i] > 0)
				printf("%x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%x", 256 + ptr[i]);
		}
		if (ptr[7] == 6)
			printf("00");
	}
	if (s == '2')
	{
		bg = 26;
		for (i = bg; i > 23; i--)
		{
			if (ptr[i] >= 0)
				printf("%02x", ptr[i]);
			else if (ptr[i] < 0)
				printf("%02x", 256 + ptr[i]);

		}
	}
	printf("\n");
}

/**
 * print_type - prints type
 * @ptr: pointer
 * Return: void
 */

void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * print_osabi - prints osabi
 * @ptr: pointer
 * Return: void
 */

void print_osabi(char *ptr)
{
	char osabi = ptr[7];

	printf("  OS/ABI:                            ");
	if (osabi == 0)
		printf("UNIX - stem V\n");
	else if (osabi == 2)
		printf("UNIX - NetBSD\n");
	else if (osabi == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osabi);
	printf("  ABI Version:                       %d\n", ptr[8]);
}

/**
 * print_version - prints version
 * @ptr: pointer
 * Return: void
 */

void print_version(char *ptr)
{
	int version = ptr[6];

	printf("  Version:                           %d", version);

	if (version == EV_CURRENT)
		printf(" (current)");
	printf("\n");
}

/**
 * print_data - prints data
 * @ptr: pointer
 * Return: void
 */

void print_data(char *ptr)
{
	char data = ptr[5];

	printf("  Data:                              2's complement");
	if (data == 1)
		printf(", little endian\n");
	if (data == 2)
		printf(", big endian\n");
}

/**
 * print_ptr - prints pointer info.
 * @ptr: pointer
 * Return: void
 */

void print_ptr(char *ptr)
{
	int bt;

	printf("  Magic:  ");
	for (bt = 0; bt < 16; bt++)
		printf(" %02x", ptr[bt]);
	printf("\n");
}

/**
 * check_s - check the version
 * @ptr: pointer
 * Return: void
 */

void check_s(char *ptr)
{
	char s = ptr[4] + '0';

	if (s == '0')
		exit(98);

	printf("ELF Header:\n");
	print_ptr(ptr);

	if (s == '1')
		printf("  Class:                             ELF32\n");

	if (s == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_osabi(ptr);
	print_type(ptr);
	print_ad(ptr);
}

/**
 * check_elf - check if it is an elf file.
 * @ptr: pointer
 * Return: 1 or 0
 */

int check_elf(char *ptr)
{
	int ad = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (ad == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);
	return (0);
}

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: arguments vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fd, rr;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}
	lseek(fd, 0, SEEK_SET);
	rr = read(fd, ptr, 27);
	if (rr == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}
	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}
	check_s(ptr);
	close(fd);
	return (0);
}
