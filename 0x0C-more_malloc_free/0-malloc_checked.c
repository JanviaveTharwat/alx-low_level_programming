#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - allocates memory
 * @b: amount of bytes
 * Return: pointer to the allocated memory if malloc fails return 98
 */

void *malloc_checked(unsigned int b)
{
void *pt;

pt = malloc(b);

if (pt == NULL)
exit(98);
return (pt);
}
