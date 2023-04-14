#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * errors -  errors for main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}


/**
* is_digit - checks digit char
* @d: string
* Return: 0  or 1
*/
int is_digit(char *d)
{
int z = 0;

while (d[z])
{
if (d[z] < '0' || d[z] > '9')
return (0);
z++;
}
return (1);
}

/**
* _strlen - returns the length of a string
* @d: string to evaluate
* Return: string's length
*/
int _strlen(char *d)
{
int z = 0;

while (d[z] != '\0')
{
z++;
}
return (z);
}


/**
* main - multiplies two  numbers
* @argc: arguments
* @argv: array
* Return: always 0
*/
int main(int argc, char *argv[])
{
char *s1, *s2;
int lm, ln, l, i, c, p, q, *pt, a = 0;

s1 = argv[1], s2 = argv[2];
if (argc != 3 || !is_digit(s1) || !is_digit(s2))
errors();
lm = _strlen(s1);
ln = _strlen(s2);
l = lm + ln + 1;
pt = malloc(sizeof(int) * l);
if (!pt)
return (1);
for (i = 0; i <= lm + ln; i++)
pt[i] = 0;
for (lm = lm - 1; lm >= 0; lm--)
{
p = s1[lm]'0';
c = 0;
for (ln = _strlen(s2) - 1; ln >= 0; ln--)
{
q = s2[ln] - '0';
c += pt[lm + ln + 1] + (p * q);
pt[lm + ln + 1] = c % 10;
c /= 10;
}
if (c > 0)
pt[lm + ln + 1] += c;
}
for (i = 0; i < l - 1; i++)
{
if (pt[i])
a = 1;
if (a)
_putchar(pt[i] + '0');
}
if (!a)
_putchar('0');
_putchar('\n');
free(pt);
return (0);
}
