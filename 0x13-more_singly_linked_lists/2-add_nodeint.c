#include "lists.h"

/**
 * add_nodeint - add node at beginning
 * @n:  add to list type int
 * Return: list +added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *abc;

	/*faild task*/
	if (head == NULL)
		return (NULL);

	/*if works "if not empty "*/

	abc = malloc(sizeof(listint_t));
	if (abc == NULL)
		return (NULL);
	abc->n = n;
	abc->next = *head;
	*head = abc;
	return (abc);
}
