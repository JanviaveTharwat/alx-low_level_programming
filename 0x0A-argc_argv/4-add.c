#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - multiplies two numbers.
 * @argc: argument
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int a, b, c = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			/*checking if char is numeric '0 to 9'*/
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/*atoi conv string to int*/
		c += atoi(argv[a]);
	}
	printf("%d\n", c);
	return (0);
}
