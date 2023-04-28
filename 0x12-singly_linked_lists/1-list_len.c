#include <stdlib.h>
#include "lists.h"
/**
  * list_len - Show the number of elements of a list
  * @h:linked list
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *h)
{
	size_t sf = 0;

	while (h)
	{
		sf++;
		h = h->next;
	}
	return (sf);

