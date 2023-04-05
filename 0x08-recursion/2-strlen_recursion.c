#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 * Return: the length of a string.
 */
int _strlen_recursion(char *s)
{
	/*if statment*/
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		/*add 1*/
		return (1 + _strlen_recursion(s + 1));
	}
}
