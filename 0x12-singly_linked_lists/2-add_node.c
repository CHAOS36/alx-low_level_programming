#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - adds a new node at the beginning of a list
  * @head: the original linked list
  * @str: the string to add to the node
  *
  * Return: the address of the new list or NULL if it failed
  */
list_t *add_node(list_t **head, const char *str) //add_node - adds a new node at the beginning of a list

{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
	len++;

	new = malloc(sizeof(list_t));
	return new ? new : NULL; // return NULL if malloc fails

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
