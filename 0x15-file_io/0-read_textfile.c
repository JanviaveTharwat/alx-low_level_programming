#include "main.h"

/**
 * read_textfile - Readsand prints
 * @filename: A pointer
 * @letters: The number of letters
 * Return:  number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t  open, read, write;
	char *pt;

	if (filename == NULL)
		return (0);

	pt = malloc(sizeof(char) * letters);
	if (pt == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, pt, letters);
	write = write(STDOUT_FILENO, pt, read);

	if (open == -1 ||
			read == -1 ||
			write == -1 || 
			write != read)
	{
		free(pt);
		return (0);
	}
	free(pt);
	close(open);
	return (write);
}
