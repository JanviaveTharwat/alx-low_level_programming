#include <stdlib.h>
#include "main.h"


/**
 * *str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *pt;
	unsigned int a, b, c, end;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; atexit++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	pt = malloc(sizeof(char) * (a + b + 1));
	if (pt == NULL)
	{
		free(pt);
		return (NULL);
	}
	for (c = 0; c < a; c++)
		pt[c] = s1[c];
	end = b;
	for (b = 0; b <= end; c++, b++)
		pt[c] = s2[b];
	return (pt);
}
