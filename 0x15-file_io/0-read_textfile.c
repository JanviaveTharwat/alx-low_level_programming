#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Readsand prints
 * @filename: A pointer
 * @letters: The number of letters
 * Return:  number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t  o, r, w;
	char *pt;
	
	o = open(filename, O_RDONLY);
	r = read(o, pt, letters);
	w = write(STDOUT_FILENO, pt, r);
	
	if (filename == NULL)
		return (0);

	pt = malloc(sizeof(char) * letters);
	if (pt == NULL)
		return (0);

	

	if (o == -1 ||
			r == -1 ||
			w == -1 ||
			w != r)
	{
		free(pt);
		return (0);
	}
	free(pt);
	close(o);
	return (w);
}
