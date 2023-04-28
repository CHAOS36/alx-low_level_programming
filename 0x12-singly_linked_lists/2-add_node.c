#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * Return: the address of the new list or NULL if it failed
 * add_node: adds a new node at the beginning of a list
  * @head: the original linked list
  * @str: the string to add to the node
 */

list_t *add_node(list_t **head, const char *str)
{
        list_t *new = malloc(sizeof(list_t));
        unsigned int len = 0;

        while (str[len])
        len++;


        if (!new)
        return (NULL);


        new->str = strdup(str);
        new->len = len;
        new->next = (*head);
        (*head) = new;

        return (*head);
}
