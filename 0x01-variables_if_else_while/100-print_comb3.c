#include <stdio.h>


/**
 * main - Prints all possible combinations of two different digits && ','+' '
 * Return: 0
 */
int main(void)
{
	int D1;
	int D2;

	for (D1 = 0; D1 < 9; D1++)
	{
		for (D2 = D1 + 1; D2 < 10; D2++)
		{
			putchar((D1 % 10) + '0');
			putchar((D2 % 10) + '0');

			if (D1 == 8 && D2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}}
	putchar('\n');
	return (0);
}
