#include "variadic_functions.h"


/**
 * print_all - prints anything
 * @format: list types
 * Return :void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *sr, *sp = "";

	va_list ls;

	va_start(ls, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sp, va_arg(ls, int));
					break;
				case 'i':
					printf("%s%d", sp, va_arg(ls, int));
					break;
				case 'f':
					printf("%s%f", sp, va_arg(ls, double));
					break;
				case 's':
					sr = va_arg(ls, char *);
					if (!sr)
						sr = "(nil)";
					printf("%s%s", sp, sr);
					break;
				default:
					i++;
					continue;
			}
			sp = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ls);
}
