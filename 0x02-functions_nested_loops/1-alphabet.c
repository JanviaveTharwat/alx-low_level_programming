#include <main.h>

/**
 *  print_alphabet - prints the alphabet in lowercase, followed by a new line.
 */
int print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		_putchar(abc);
	_putchar('\n');
}
