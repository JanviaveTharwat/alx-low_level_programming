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
	if (argc == 2)
	{
		 int a, min = 0;
		 /*atoi conv sting to intiger*/
		 int cash = atoi(argv[1]);
		 int cents [] = {25, 10, 5, 2, 1};

		 /*for loop will execude till its break point*/
		 for (a 0; a < 5 ; a++)
		 {
			 /*if statment (loop condition*/
			 if (cash >= cents[a])
			 {
				 min += cash / cents[a];
				 cash = cash % cents[a];
				 /*break case*/
				 if (cash % cents[a] == 0)
				 {
					 break;
				 }
			 }
		 }
		 printf("%d\n", min);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
