#include "lists.h"

/**
 * print_listint_safe -  prints a linked list with a loop safely.
 *  @head: pointer
 *  Return: new node
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp = NULL;
	const listint_t *list = NULL;
	size_t count = 0;
	size_t new;

	tmp = head;
	while (tmp)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		count++;
		tmp = tmp->next;
		list = head;
		new = 0;
		while (new < count)
		{
			if (tmp == list)
			{
				printf("-> [%p] %d\n", (void *)tmp, tmp->n);
				return (count);
			}
			list = list->next;
			new++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}

