#include "lists.h"

/**
 * listint_len - number of elements in a linked list
 * @h: linked list pointer
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
