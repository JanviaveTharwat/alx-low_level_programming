#include <stdio.h>


/**
 * main - Prints the alphabet in lowercase.
 * Return: Always 0.
 */
int main(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		putchar(abc);

	putchar('\n');
	return (0);
}
