#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node to the beginning of a linked list
 * _strlen - finds the length of  strings
 * @str: find the length of that string
 *
 * Return: It returns the length of that string
 */
typedef struct list_t {
    char *str;
    unsigned int len;
    struct list_t *next;
} list_t;

unsigned int strlen(const char *str) {
    unsigned int len = 0;
    while (*str++) len++;
    return len;
}

list_t *add_node(list_t **head, const char *str) {
    if (!str) return NULL;
    list_t *new_list_t = (list_t *) malloc(sizeof(list_t));
    if (!new_list_t) return NULL;
    new_list_t->str = strdup(str);
    if (!new_list_t->str) {
        free(new_list_t);
        return NULL;
    }
    new_list_t->len = strlen(str);
    new_list_t->next = *head;
    *head = new_list_t;
    return new_list_t;
}

