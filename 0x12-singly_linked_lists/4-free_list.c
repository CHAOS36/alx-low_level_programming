#include <stdlib.h>
#include "lists.h"

/** 
 * free_list - frees the allocated memory
 * @head: pointer to the head of the list
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

