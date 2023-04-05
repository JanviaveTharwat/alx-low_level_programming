#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: input number.
 * Return: factorial of the number.
 */
int factorial(int n)
{
	/*if statment*/
	if (n < 0)
	{
		/* basic : n <0  will return : -1 */
		return (-1);
	}
	else if (n == 0)
	{
		/* n = 0 ; return 1*/
		return (1);
	}
	else
	{
		/* multiply n and factorial (n-1) function */
		return (n * factorial(n - 1));
	}
}
