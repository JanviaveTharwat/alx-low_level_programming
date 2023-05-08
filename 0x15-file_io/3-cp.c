#include "main.h"

/**
 * copy- copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: double pointer
 * Return: the actual number of letters it could read and print
 */

int copy(int argc, char **argv)
{
	int cp1, cp2, n;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	cp1 = open(argv[1], O_RDONLY);
	if (cp1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	cp2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	while ((n = read(cp1, buf, 1024)) > 0)
	{
		if (write(cp2, buf, n) != n || cp2 == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(cp1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp1);
		exit(100);
	}
	if (close(cp2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp2);
		exit(100);
	}
	return (0);
}
