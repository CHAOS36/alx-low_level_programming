#include <stdlib.h>
#include "lists.h"

/**
 * main - check the code 
 *
 * free_list - frees a linked list
 *
 * @head: list_t list to be freed
 *
 * Return : always 0.
 */
void free_list(list_t *head)
{
 list_t *temper;

 while (head)
 {
 temper = head->next;
 free(head->str);
 free(head);
 head = temper;
 }
}

