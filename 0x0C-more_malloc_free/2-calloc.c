#include "main.h"
#include <stdlib.h>


/**
 * * _calloc - allocates memory
 * @nmemb: number of elements of array
 * @size: size of elements
 * Return: Pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pt;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pt = malloc(nmemb * size);
	if (pt != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			pt[i] = 0;
		return (pt);
	}
	else
		return (NULL);
}
