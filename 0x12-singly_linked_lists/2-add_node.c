#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * main - check the code
 *
 *
 *
 *
 *
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length;
	length = 0;

	while (str[length])
	length++;

	new = malloc(sizeof(list_t));
	if (!new){
	return (NULL);
	}

	new->str = strdup(str);
	new->length = length;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
