#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two
 * diagonals of a square matrix of integers
 * @a: input pointer.
 * @size: size of the matrix
 * Return: no return.
 */
void print_diagsums(int *a, int size)
{
	int i, m = 0, n = 0;

	for (i = 0; i < size; i++)
	{
		m += *(a + (size * i + i));
		n += *(a + (size * i + size - 1 - i));
	}
	printf("%d, ", m);
	printf("%d\n", n);
}
