#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - always adds a new node at the beginning of a list
  * @head: i think it is the original linked list
  * @str: the string is to add to the node
  *
  * Return: should return the address of the new lists or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *news;
	unsigned int lent = 0;

	while (str[lent])
	lent++;

	news = malloc(sizeof(list_t));
	if (!news)
	return (NULL);

	news->str = strdup(str);
	news->len = lent;
	news->next = (*head);
	(*head) = news;

	return (*head);
}
