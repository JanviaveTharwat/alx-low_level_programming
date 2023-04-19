#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>


/**
 * main - Prints the value of simple operations.
 * @argc: arguments
 * @argv: array of pointers
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int ar1, ar2, value;
	char abc;
	int (*func)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	ar1 = atoi(argv[1]);
	ar2 = atoi(argv[3]);
	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}
	abc = *argv[2];
	if ((abc == '/' || abc == '%') && ar2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	value = func(ar1, ar2);
	printf("%d\n", value);
	return (0);
}
