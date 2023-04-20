#include "variadic_functions.h"


/**
 * print_numbers - prints numbers
 * @separator: string
 * @n: number of integer
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ls;
	unsigned int i;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(li);
}
