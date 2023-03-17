#include <stdio.h>


/**
 * main -prints all single digit numbers 10 from 0
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar((i % 10) + '0');
	}
	printf('\n');
	return (0);
}
