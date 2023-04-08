#include <stdio.h>

/**
 * main - prints all arguments
 * @argc: arguments
 * @argv: array pointer
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	/*for loop*/
	for (; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
