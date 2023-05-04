#include "main.h"


/**
 * print_binary - print binary representation of a number
 * @n: intiger
 * Return : void
 */

void print_binary(unsigned long int n)
{
	unsigned long int entry;
	int conv;

	if (n == 0)
	{
		printf("0");
		return;
	}
	for (entry = n, conv = 0; (entry >>= 1) > 0; conv++)
		;
	for (; conv >= 0; conv--)
	{
		if ((n >> conv) & 1)
			printf("1");
		else
			printf("0");
	}
}
