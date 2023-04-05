#include "main.h"

/**
 * checker - number is prime?
 * @n: integer
 * @m: integer
 * Return: 1 or zero
 */

int checker(int n, int m)
{
	if (m % n == 0)
	{
		return (0);
	}
	else if (m / 2 > n)
	{
		return (checker(n + 2, m));
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - prime
 * @n: integer
 * Return: recursion
 */

int is_prime_number(int n)
{
	if ((!(n % 2) && n != 2) || n < 2)
	{
		return (0);
	}
	else
	{
		return (checker(3, n));
	}
}
