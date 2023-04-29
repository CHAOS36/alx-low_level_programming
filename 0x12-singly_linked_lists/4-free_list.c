#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees the memory allocated for a list_t list.
 * @head: A pointer to the head of the list_t list.
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
