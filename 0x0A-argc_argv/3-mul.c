#include <stdio.h>


/**
 * main - multiplies two numbers.
 * @argc: argument
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	/*atoi convert string into integer */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
