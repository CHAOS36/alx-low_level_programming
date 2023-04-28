#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * @str: string to find the length of
 *
 * Return: length of string
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * add_node_end - adds new nodes to the end of linked list
 * @head: double pointers to a linked list
 * @str: string to add to the new node
 *
 * Return: always returns pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmps;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmps = *head;
	while (tmps->next)
		tmps = tmps->next;
	tmps->next = new;
	return (new);
}
