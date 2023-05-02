#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer
 * Return: number of elements
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lth = 0;
	int num;
	listint_t *temp;

	if (!h || !*h)
		return (0);
	while (*h)
	{
		num = *h - (*h)->next;
		if (num > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lth++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lth++;
			break;
		}
	}
	*h = NULL;
	return (lth);
}
