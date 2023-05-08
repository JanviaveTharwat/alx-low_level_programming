#include "main.h"

#define MAXSIZE 1024


/**
 * __exit - prints error messages and exits with exit number
 * @error: either the exit number or file descriptor
 * @str: name of either fi or fo
 * @fd: file descriptor
 * Return: 0
 */
int __exit(int error, char *str, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(error);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
			exit(error);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
			exit(error);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(error);
		default:
			return (0);
	}
}

/**
 * main - create a copy
 * @argc: argument counter
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fi, fo, r, w, ci, co;
	char buffer[MAXSIZE];

	if (argc != 3)
		__exit(97, NULL, 0);
	fi = open(argv[1], O_RDONLY);
	if (fi == -1)
		__exit(98, argv[1], 0);

	fo = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (fo == -1)
		__exit(99, argv[2], 0);
	while ((r = read(fi, buffer, MAXSIZE)) != 0)
	{
		if (r == -1)
			__exit(98, argv[1], 0);

		w = write(fo, buffer, r);

		if (w == -1)
			__exit(99, argv[2], 0);
	}
	ci = close(fi);
	if (ci == -1)
		__exit(100, NULL, fi);
	co = close(fo);
	if (co == -1)
		__exit(100, NULL, fo);
	return (0);
}
