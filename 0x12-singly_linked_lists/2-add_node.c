#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - always adds a node to the beginning of a linked list
 * _strlen - finds the length of  strings
 * @str: find the length of that string
 *
 * Return: It returns the length of that string
 */
unsigned int _strlen(char *str)
{
	unsigned int fr;

	for (fr = 0; str[fr]; fr++)
		;
	return (fr);
}
/**
 * @head: double pointer to a lined list
 *
 * Return: returns a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

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
	new->next = *head;
	*head = new;
	return (new);
}
