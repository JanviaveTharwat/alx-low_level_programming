#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars
 * @size: size of the created array
 * @c: char to initialize the array c
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *pt;
	unsigned int a = 0;

	if (size == 0)
	{
		return (NULL);
	}
	pt = (char *) malloc(sizeof(char) * size);
	if (pt == NULL)
	{
		return (0);
	}
	while (a < size)
	{
		*(pt + a) = c;
		a++;
	}
	*(pt + a) = '\0';
	return (pt);
}
