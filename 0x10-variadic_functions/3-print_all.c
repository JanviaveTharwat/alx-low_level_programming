#include "variadic_functions.h"


/**
 * print_char - print a char
 * @arg: a list of argument
 * Return: void
 */


void print_char(va_list arg)
{
	char abc = va_arg(arg, int);

	printf("%c", abc);
}

/**
 * print_int - prints integer
 * @arg: a list of argument
 * Return: void
 */

void print_int(va_list arg)
{
	int num = va_arg(arg, int);

	printf("%d", num);
}

/**
 *  print_float - print a float
 *  @arg: a list of argument
 *  Return: void
 */

void print_float(va_list arg)
{
	float f = va_arg(arg, double);

	printf("%f", f);
}

/**
 * print_string - print a string
 * @arg: a list of argument
 * Return: void
 */

void print_string(va_list arg)
{
	char *abc = va_arg(arg, char *);

	if (abc == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", abc);
}

/**
 * print_all - a function that prints anything
 * @format: A string of character
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list ls;
	int i = 0, j;
	char *sp = "";
	print_func fp = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(ls, format);

	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(fp.symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", sp);
			fp.print_func(ls);
			sp = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ls);
}
