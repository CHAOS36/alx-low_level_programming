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
	list_t *news;
	unsigned int len;
	len = 0;

	while (str[len])
	len++;

	news = malloc(sizeof(list_t));
	if (!news){
	return (NULL);
	}

	news->str = strdup(str);
	news->len = len;
	news->next = (*head);
	(*head) = news;

	return (*head);
}
