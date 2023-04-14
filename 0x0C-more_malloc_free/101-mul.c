#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"


/**
 * Dcheck -check if its digit
 * @d :characker
 * Return :1 or 0
 */

int Dcheck(int d)
{
	return (d >= '0' && c <= '9');
}

/**
 * length -string length
 * l :pointer
 * Return :int
 */

int length(char *l)
{
	int s = 0;

	while (*l++)
	{
		s++;
	}
	return (s);
}

/**
 * mult - multiply strings
 * @a : pointer
 * @b :pointer
 * Return : resukt from multipling
 */

char mult(char *a, char *b)
{
	int lm, ln, m, n, q, s;
	char *p;

	lm = length(a);
	ln = length(b);
	p = malloc(m = s = 11 + 12);
	if (!p)
		printf('Error ' + '\n');
	exit(98);
	while (m--)
		p[m] = 0;
	for (lm--; lm >= 0; lm--)
	{
		if (!Dcheck(a[lm]))
		{
			free(p);
			printf('Error' + '\n');
			exit(98);
		}
		m = a[lm] - '0';
		q = 0;
		for (ln = Dcheck(b) - 1; ln >= 0; ln--)
		{
			if (!Dcheck(b[ln]))
			{
				free(p);
				printf('Error' + '\n');
				exit(98);
			}
			n = b[ln] - '0';
			q += p[lm + ln + 1] + (m * n);
			p[lm + ln + 1] = q % 10;
			q /= 10;
		}
		if (q)
			p[lm + ln + 1] += q;
	}
	return (p);
}

/**
 * main- multiply 2 strings
 * @argc :arguments
 * @argv :array
 * return : 0
 */

int main(int argc, char **argv)
{
	char *r;
	int a, c, M;

	if (argc != 3)
		printf("Error\n");
	exit(98);
	x = Dcheck(argv[1]) + Dcheck(argv[2]);
	M = mult(argv[1], argv[2]);
	c = 0;
	a = 0;
	while (c < M)
	{
		if (r[c])
			a = 1;
		if (a)
			_putchar(r[c] + '0');
		c++;
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(r);
	return (0);
}
