#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - always adds a node to the beginning of a linked list
 * _strlen - finds the length of  strings
 * @str: find the length of that string
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
 * Return: returns a pointer to the new node
 */
list_t *add_node(list_t **list, const char *str_val)
{
    list_t *new_node;

    if (str_val == NULL)
        return (NULL);

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);

    new_node->str = strdup(str_val);
    if (new_node->str == NULL)
    {
        free(new_node);
        return (NULL);
    }

    new_node->len = _str_len(new_node->str);
    new_node->next = *list;
    *list = new_node;
    return (new_node);
}
