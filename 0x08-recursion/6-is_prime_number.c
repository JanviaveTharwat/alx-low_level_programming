#include "main.h"


/**
 * is_prime_number - returns true if the number is prime
 * @n: the number to check
 * Return: true if the number is prime
 */
int is_prime_number(int n)
{
	int m = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (checker(n, m));
}

/**
 * checker - returns the 1 if n is prime
 * @n: number to be checked
 * @m: number to start checking from
 * Return: 1 if n is prime or 0
 */

int checker(int n, int m)
{
	if (m <= 1)
	{
		return (1);
	}
	else if (n % m == 0)
	{
		return (0);
	}
	return (checker(n, m - 1));
}
