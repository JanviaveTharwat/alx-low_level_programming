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
int a = 0, b = 0;

if (str == NULL)
return (NULL);

for (; str[b] != '\0'; b++)
new = malloc(b * sizeof(*str) + 1);

if (new == 0)
{
return (NULL);
}
else
{
for (; a < b; a++)
new[a] = str[a];
}
return (new);
}
