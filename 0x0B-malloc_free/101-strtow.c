#include "main.h"
#include <stdlib.h>

/**
 * count -count word in string
 * @a: string
 * Return: number of words
 */

int count(char *a)
{
	int b, c = 0;

	for (b = 0; a[b]; b++)
	{
		if (a[b] == ' ')
		{
			if (a[b + 1] != ' ' && a[b + 1] != '\0')
				c++;
		}
		else if (b == 0)
			c++;
	}
	c++;
	return (c);
}

/**
 * *strtow - splits a string into words
 * @str: string
 * Return: pointer of an array
 */

char **strtow(char *str)
{
	char **word;
	int b, d, e, f, c = 0, z = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	c = count(str);
	if (c == 1)
		return (NULL);
	word = (char **)malloc(c * sizeof(char *));
	if (word == NULL)
		return (NULL);
	word[c - 1] = NULL;
	b = 0;
	while (str[b])
	{
		if (str[b] != ' ' && (b == 0 || str[b - 1] == ' '))
		{
			for (d = 1; str[b + d] != ' ' && str[b + d]; d++)
				;
			d++;
			word[z] = (char *)malloc(d * sizeof(char));
			d--;
			if (word[z] == NULL)
			{
				for (e = 0; e < z; e++)
					free(word[e]);
				free(word[c - 1]);
				free(word);
				return (NULL);
			}
			for (f = 0; f < d; f++)
				word[z][f] = str[b + f];
			word[z][f] = '\0';
			z++;
			b += d;
		}
		else
			b++;
	}
	return (word);
}
