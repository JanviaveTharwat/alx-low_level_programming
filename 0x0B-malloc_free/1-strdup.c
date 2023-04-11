#include <stdlib.h>
#include "main.h"


/**
 * *_strdup - returns a pointer to a newly allocated space in memory
 * @str:String to be copied
 * Return: pointer to allocated space
 */

char *_strdup(char *str)
{
	char *new;
	int a, b;

	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		new = malloc(sizeof(char) * (b + 1));
		b++;
	}
	if (new == NULL)
	{
		return (NULL);
	}
	for (a = 0; str[a]; a++)
	{
		new[a] = str[a];
	}
	new[b] = '\0';
	return (new);
}
