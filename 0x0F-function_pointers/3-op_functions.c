#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * op_add - calculates the sum of two integers
 * @a: integer
 * @b: integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two integers
 * @a: integer
 * @b: integer
 * Return: difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates multiply two integers
 * @a: integer
 * @b:  integer
 * Return: multiply a b
 */

int op_mul(int a, int b)
{
	return (a * b);
}


/**
 * op_div - calculates division of two integers
 * @a: integer
 * @b: integer
 * Return: a divided b
 */

int op_div(int a, int b)
{
	return (a / b);
}


/**
 * op_mod - calculates division of two integers
 * @a: integer
 * @b: integer
 * Return: a divided b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
