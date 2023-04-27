#include "lists.h"

/**
 * _strlen - returns string's length
 * @st :string
 * Return :int
 */

int _strlen(char *st)
{
	int i = 0;

	if (!st)
		return (0);
	while (*st++)
		i++
			return (i);
}

/**
 * print_list - prints linked list
 * @h : pointer
 * Retuen : list size
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		printf("[%d] %s\n",
				_strlen(h->str),
				h->str ? h->str : "(nil)");
		h = h->next;
		n++;
	}
	return (n);
}
