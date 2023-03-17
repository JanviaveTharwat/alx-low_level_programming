#include <stdio.h>

/**
 * main - Prints 3 combination of numbers
 * Return: 0
 */
int main(void)
{
	int D1, D2, D3;

	for (D1 = '0'; D1 <= '9'; D1++)
	{
		for (D2 = '0'; D2 <= '9'; D2++)
		{
			for (D3 = '0'; D3 <= '9'; D3++)
			{
				if (D1 < D2 && D2 < D3)
				{
					putchar(D1);
					putchar(D2);
					putchar(D3);

					if (D1 != '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
