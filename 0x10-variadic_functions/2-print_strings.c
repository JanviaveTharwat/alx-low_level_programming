#include "variadic_functions.h"


/**
 * print_strings - prints strings
 * @separator: pointer
 * @n: int
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ls;
	unsigned int i;
	char *s;

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ls, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}

