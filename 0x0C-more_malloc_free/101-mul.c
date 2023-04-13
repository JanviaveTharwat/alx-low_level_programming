#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * wright - prints string +new line
 * @abc : pointer
 * Return : void
 */

void wright(char *abc)
{
	int a = 0;

	while (abc[a])
	{
		_putchar(abc[a]);
		a++;
	}
}

/**
 * _atoi - convert sting to int + conv -ve value
 * @b :pointer
 * Return : int
 */

int _atoi(const char *b)
{
	int z = 1;
	unsigned long int w = 0, x = 0, y;

	for (y = x; b[y] >= 0 && b[y] <= 9; y++)
	{
		w *= 10;
		w += (b[y] - 0)
	}
	for (; !(b[x] >= 0 && b[x] <= 9); x++)
	{
		if (b[x] == '-')
		{
			z *= -1;
		}
	}
	return (z * w);
}

/**
 * text - print int
 * @c :int
 * Return : 0
 */

void text(unsigned long int c)
{
	unsigned long int d = 1, i = 0, j;

	for (; d >= 1; c %= d, d /= 10)
	{
		j = c / d;
		_putchar('0' + j);
	}
	for (; c / d > 9; i++, d *= 10)
		;
}

/**
 * main -print results + new line
 * @argc :argumment
 * @argv : array
 * Return : 0
 */

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		wright('Error ');
		exit(98);
	}
	text(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');
	return (0);
}
