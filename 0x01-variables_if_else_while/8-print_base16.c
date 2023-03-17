#include <stdio.h>


/**
 * main - prints all the numbers of base 16 in lowercase
 * Return: 0
 */
int main(void)
{
	int i;
	int abc;

	for (i = 0; i < 10; i++)
		putchar((i % 10) + '0');

	for (abc = 'a'; abc <= 'f'; abc++)
		putchar(abc);

	putchar('\n');
	return (0);
}
