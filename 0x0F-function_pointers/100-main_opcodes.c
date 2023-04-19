#include <stdio.h>
#include <stdlib.h>


/**
 * main - print opcodes
 * @argc: arguments
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, counter;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	counter = atoi(argv[1]);
	if (counter < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < counter; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i  < counter - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
