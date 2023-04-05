#include "main.h"

/**
 *  _pow_recursion - returns the value of x raised to the power of y.
 *   @x: intiger
 *    @y: intiger.
 *    Return: pow recrusion
 */
int _pow_recursion(int x, int y)
{
	/*
	 * if statment has 3 cases based on y's value
	 * y bigger than 0 /smaller than 0 or equal zero
	 */
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
