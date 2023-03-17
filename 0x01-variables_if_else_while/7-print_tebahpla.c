#include <stdio.h>


/**
 * main - prints lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
	int cba;

	for (cba = 'z'; cba >= 'a'; cba--)
	{
		putchar(cba);
	}
	putchar('\n');
	return (0);
}
