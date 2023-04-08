#include <stdio.h>
#include <stdlib.h>


/**
 * main - min mub
 * @argc: argument
 * @argv: array
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int cents, cash = 0;
	/*check point*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	/*atoi cov string to int*/
	cents = atoi(argv[1]);
	/*while loop*/
	while (cents > 0)
	{
		cash++;
		if ((cents - 25) >= 0)
		{
			cents -= 25;
			continue;
		}
		if ((cents - 10) >= 0)
		{
			cents -= 10;
			continue;
		}
		if ((cents - 5) >= 0)
		{
			cents -= 5;
			continue;
		}
		if ((cents - 2) >= 0)
		{
			cents -= 2;
			continue;
		}
		cents--;
	}
	printf("%d\n", cash);
	return (0);
}
