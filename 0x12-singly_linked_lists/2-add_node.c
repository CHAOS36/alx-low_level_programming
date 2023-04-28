#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * Return: the address of the new list or NULL if it failed
 * add_node: adds a new node at the beginning of a list
  * @head: the original linked list
  * @str: the string to add to the node
 *
 */

typedef struct list_s {
    char *str;
    struct list_s *next;
} list_t;

list_t *add_node(list_t **head, const char *str) {
    list_t *new_node = malloc(sizeof(list_t));
    if (new_node == NULL) {
        return NULL; // return NULL if malloc fails
    }
    new_node->str = strdup(str);
    if (new_node->str == NULL) {
        free(new_node); // free allocated memory if strdup fails
        return NULL;
    }
    new_node->next = *head;
    *head = new_node;
    return new_node;
}

