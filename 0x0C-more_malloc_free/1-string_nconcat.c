#include "main.h"
#include <stdlib.h>


/**
 * *string_nconcat - concatenates string to another string
 * @s1: string
 * @s2: string
 * @n: number of bytes from s2 to concatenate to s1
 * Return: pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pt;
	unsigned int l1 = n, l2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{s2 = "";
	}

	for (l2 = 0; s1[l2]; l2++)
		l1++;
	pt = malloc(sizeof(char) * (l1 + 1));

	if (pt == NULL)
	{return (NULL);
	}
	l1 = 0;
	for (l2 = 0; s1[l2]; l2++)
	{
		pt[l1++] = s1[l2];
	}
	for (l2 = 0; s2[l2] && l2 < n; l2++)
	{
		pt[l1++] = s2[l2];
	}
	pt[l1] = '\0';
	return (pt);
}
