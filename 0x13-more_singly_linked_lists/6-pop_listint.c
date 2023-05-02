#include "lists.h"

/**
 *  pop_listint - deletes the head node of a linked list
 *  @head: head of a list
 *  Return: head node's data
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *h;
	listint_t *ab;

	if (*head == NULL)
		return (0);
	ab = *head;
	n = ab->n;
	h = ab->next;
	free(ab);
	*head = h;
	return (n);
}
