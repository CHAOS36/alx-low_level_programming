#include "lists.h"
#include <stdio.h>
/**
 * print_listint - this function displays the elements of a linked list
 * @h: is a pointer to the head of the linked list 
 *
 * Return: The number of nodes in the lists
 */

size_t print_listint(const listint_t *h)
{
	size_t sodes = 0;

	while (h)
	{
		sodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (sodes);
}
