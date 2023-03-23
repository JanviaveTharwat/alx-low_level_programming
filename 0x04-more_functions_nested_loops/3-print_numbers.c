#include "main.h"
#include <stdio.h>

/**
 * print_numbers - print 0123456789
 * owned by Bwave ICT
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
