#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node
 * @head: pointer
 * @index: index where the node is deleted.
 * Return: 1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *pv;
	listint_t *nt;

	pv = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && pv != NULL; i++)
		{
			pv = pv->nt;
		}
	}
	if (pv == NULL || (pv->nt == NULL && index != 0))
	{
		return (-1);
	}
	nt = pv->nt;
	if (index != 0)
	{
		pv->nt = nt->nt;
		free(nt);
	}
	else
	{
		free(pv);
		*head = nt;
	}
	return (1);
}
