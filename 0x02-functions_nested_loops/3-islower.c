#include "main.h"

/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * Return: 1 if true. 0 if false.
 */
int _islower(int abc)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (abc == i)
		{
			return (1);
		}
	}
	return (0);
}
