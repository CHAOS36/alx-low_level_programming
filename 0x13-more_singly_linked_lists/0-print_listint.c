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
	const listint_t *curse = h;
	size_t sodes = 0;

	while (h)
	{
		printf("%d\n", curse->n);
		sodes += 1;
		curse = curse->next;
	}

	return (sodes);
}
