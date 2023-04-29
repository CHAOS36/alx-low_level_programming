#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to  list_t list to print
 * Return: Returns the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t cpt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		cpt++;
		h = h->next;
	}

	return (cpt);
}
