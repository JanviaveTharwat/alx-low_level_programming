#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer
 * Return: address of the node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a;
	listint_t *z;

	a = z = head;

	while (a && z && z->next)
	{
		a = a->next;
		z = z->next->next;
		if (a == z)
		{
			a = head;
			break;
		}
	}
	if (!a || !z || !z->next)
		return (NULL);
	while (a != z)
	{
		a = a->next;
		z = z->next;
	}
	return (z);
}
