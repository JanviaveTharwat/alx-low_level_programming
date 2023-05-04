#include "main.h"

/**
 * flip_bits - gets the number of bits to flip to get from n to m
 * @n: 1st
 * @m: lasy
 * Return: the number of flipped bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip = n ^ m;
	int rounds = 0;

	while (flip)
	{
		if (flip & 1)
			rounds++;
		flip >>= 1;
	}
	return (rounds);
}
