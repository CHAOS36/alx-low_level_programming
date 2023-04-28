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
	unsigned int i;

	for (i = 0; str[i]; i++)
		;
	return (i);
}
/**
 * @head: double pointer to a lined list
 *
 * Return: returns a pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *news;

	if (str == NULL)
		return (NULL);
	news = malloc(sizeof(list_t));
	if (news == NULL)
		return (NULL);
	news->str = strdup(str);
	if (news->str == NULL)
	{
		free(news);
		return (NULL);
	}
	news->len = _strlen(news->str);
	news->next = *head;
	*head = news;
	return (news);
}
