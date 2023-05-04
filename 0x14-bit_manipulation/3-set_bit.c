#include "main.h"

/**
 * set_bit - Sets the value of a bit at a given index to 1.
 * @n: pointer
 * @index: The index to set the value
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n |= (1 << index);
	return (1);
}
