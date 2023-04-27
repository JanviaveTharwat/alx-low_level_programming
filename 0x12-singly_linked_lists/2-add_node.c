#include "lists.h"

/**
 * _strlen - returns string length
 * @st : character
 * Return: length
 */

int _strlen(const char *st)
{
	int i = 0;

	while (st[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at beginning
 * @head: head of a list_t
 * @str:  element
 * Return: the number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;

	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	add->str = strdup(str);
	add->len = _strlen(str);
	add->next = *head;
	*head = add;
	return (add);
}
