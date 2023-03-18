#include<stdio.h>


/**
 * main - Entry Point
 * Return: 0
 */

int main(void)
{
	int D1 = 0, D2;

	while (D1 <= 99)
	{
		D2 = D1;
		while (D2 <= 99)
		{

			if (D2 != D1)
			{
				putchar((D1 / 10) + 48);
				putchar((D1 % 10) + 48);
				putchar(' ');
				putchar((D2 / 10) + 48);
				putchar((D2 % 10) + 48);

				if (D1 != 98 || D2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			++D2;
		}
		++D1;
	}
	putchar('\n');

	return (0);
}
