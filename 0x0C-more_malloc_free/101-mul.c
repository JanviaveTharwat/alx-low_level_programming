#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "Error"
/**
*_isdigit - checks if a string is digit
*@s: string
*Return: 0 if not a digit
*/
int _isdigit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
*_strlen - returns length of string
*@s: string
*Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
*errortime - produces an error
*Return: void
*/
void errortime(void)
{
	printf("Error\n");
	exit(98);
}
/**
*main - multiplies two integers
*@argc: num of arguments
*@argv: arguments
*Return: 0
*/
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int l1, l2, l, i, c, n1, n2, *res, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !_isdigit(s1) || !_isdigit(s2))
		errortime();
	l1 = _strlen(s1);
	l2 = _strlen(s2);
	l = l1 + l2 + 1;
	res = malloc(4 * l);
	if (!res)
		return (1);
	for (i = 0 ; i < l1 + l2 ; i++)
		res[i] = 0;
	for (l1 = l1 - 1 ; l1 >= 0 ; l1--)
	{
		n1 = s1[l1] - '0';
		c = 0;
		for (l2 = l2 - 1 ; l2 >= 0 ; l2--)
		{
			n2 = s2[l2] - '0';
			c += res[l1 + l2 + 1] = c % 10;
			c /= 10;
		}
		if (c > 0)
			res[l1 + l2 + 1] += c;
	}
	for (i = 0 ; i < l - 1 ; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}
