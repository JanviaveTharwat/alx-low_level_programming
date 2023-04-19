#include <stdlib.h>
#include "function_pointers.h"


/**
 * print_name - prints a name
 * @name: name
 * @f: pointer function
 * Return : void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
