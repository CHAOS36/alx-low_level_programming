#include <stdio.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t cpto = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);

		h = h->next; 
		cpto++;
	}

	return (cpto);
}

