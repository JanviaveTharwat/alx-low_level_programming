#include "main.h"
#include <stdlib.h>



/**
 * *_realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: size of ptr
 * @new_size: size of the new memory
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
		void *pt;
			unsigned int i = 0;

			if (new_size == old_size)
				return (ptr);
			if (new_size == 0 && ptr != NULL)
			{
				free(ptr);
				return (NULL);
			}
			if (ptr == NULL)
			{
				pt = malloc(new_size);
				if (pt == NULL)
					return (NULL);
				return (pt);
			}
			if (new_size > old_size)
			{
				pt = malloc(new_size);
				if (pt == NULL)
					return (NULL);
				for (; i < old_size && i < new_size; i++)
					*((char *)pt + i) = *((char *)ptr + i);
				free(ptr);
			}
			return (pt);
}
