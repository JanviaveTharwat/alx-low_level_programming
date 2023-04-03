#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @n: number of time to copy b
 * @s: memory area to be filled
 * @b: char to copy
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
