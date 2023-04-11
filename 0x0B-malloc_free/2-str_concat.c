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
int a, b = 0, size = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

for (a = 0; s1[a] || s2[a]; a++)
size++;
pt = malloc(sizeof(char) * size);
if (pt == NULL)
return (NULL);
for (a = 0; s1[a]; a++)
pt[b++] = s1[a];
for (a = 0; s2[a]; a++)
pt[b++] = s2[a];
return (pt);
}
