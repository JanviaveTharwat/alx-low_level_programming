#include "lists.h"

/**
 * reverse_listint -  reverses a listint_t
 * @head: pointer
 *  Return: reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head);
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head = prev;
	return (*head);
}
