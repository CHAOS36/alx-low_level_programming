#include <stdlib.h>
#include "lists.h"

size_t list_len(const list_t *h)
{
	size_t sf = 0;

	while (h)
	{
		sf++;
		h = h->next;
	}
	return (sf);
}
