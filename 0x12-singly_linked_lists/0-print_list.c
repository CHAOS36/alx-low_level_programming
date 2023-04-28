#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t cpto = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[%d] %s", h->len, h->str);
		cpto++;
		h = h->next;
	}
	return (cpto);
}
