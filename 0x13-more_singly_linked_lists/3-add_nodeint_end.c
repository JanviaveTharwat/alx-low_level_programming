#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of a linked list
 * @head: pointer
 * @n: int
 * Return: add at the end
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ab = *head;

	new = malloc(sizeof(listint_t));
	if (new != NULL)
	{
		new->n = n;
		new->next = NULL;
	}
	else
		return (NULL);
	if (ab != NULL)
	{
		while (ab->next != NULL)
			ab = ab->next;
		ab->next = new;
	}
	else
		*head = new;
	return (new);
}
