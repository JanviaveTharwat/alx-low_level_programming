#include "lists.h"

/**
 * free_listint2 - clear a linked list
 * @head: pointer
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *ab;
	listint_t **n = head;

	if (n != NULL)
	{
		while (*head != NULL)
		{
			ab = *head;
			free(ab);
			*head = (*head)->next;
		}
		*n = NULL;
	}
}
