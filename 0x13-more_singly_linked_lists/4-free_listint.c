#include "lists.h"

/**
 * free_listint - clear a linked list
 * @head: pointer
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *ab;

	while ((ab = head) != NULL)
	{
		head = head->next;
		free(ab);
	}
}
