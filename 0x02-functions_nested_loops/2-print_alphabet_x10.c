#include <stdio.h>

/**
 *print_alphabet_x10 - Make alphabet x10 times
 */
void print_alphabet_x10(void)
{
	char abc;
	int counter = 0;

	while (counter <= 9)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}
		_putchar('\n');
		counter++;
	}
}
