#include <stdlib.h>
#include <stdio.h>
#include "main.h"


/**
 * errors - prints error
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * numcheck- checks if a string contains a non-digit char
 * @abc: string to be evaluated
 * Return: 0
 */
int numcheck(char *abc)
{
	int a = 0;

	while (abc[a])
	{
		if (abc[a] < '0' || abc[a] > '9')
			return (0);
		a++;
	}
	return (1);
}

/**
 * long- returns the length of a string
 * @abc: string to evaluate
 * Return: string length
 */

int long(char *abc)
{
	int a = 0;

	while (abc[a] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * main - multiplies two positive numbers
 * @argc: arguments
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *pt1, *pt2;
	int l, m, n, o = 0, r, x, y, *checker, q = 0;

	pt1 = argv[1];
	pt2 = argv[2];
	if (argc != 3 || !numcheck(pt1) || !numcheck(pt2))
		errors();
	m = long(pt1);
	n = long(pt2);
	l = m + n + 1;
	checker = malloc(sizeof(int) * l);
	if (!checker)
		return (1);
	for (; o <= m + n; o++)
		checker[o] = 0;
	for (m = m - 1; m >= 0; m--)
	{
		x = pt1[m] - '0';
		r = 0;
		for (n = long(pt2) - 1; n >= 0; n--)
		{
			y = pt2[n] - '0';
			r += checker[m + n + 1] + (x * y);
			checker[m + n + 1] = r % 10;
			r /= 10;
		}
		if (r > 0)
			checker[m + n + 1] += r;
	}
	for (; o < l - 1; o++)
	{
		if (checker[i])
			q = 1;
		if (q)
			_putchar(checker[o] + '0');
	}
	if (!q)
		_putchar('0');
	_putchar('\n');
	free(checker);
	return (0);
}
