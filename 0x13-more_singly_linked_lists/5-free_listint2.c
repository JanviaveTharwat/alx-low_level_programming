#include "lists.h"

/**
* free_listint2 - frees a linked list
* @head: pointer
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *n;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		n = (*head)->n;
		free(*head);
		*head = n;
	}
}

