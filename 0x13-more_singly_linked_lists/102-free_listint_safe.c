#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t lenny = 0;
	int diffe;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diffe = *h - (*h)->next;
		if (diffe > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenny++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenny++;
			break;
		}
	}

	*h = NULL;

	return (lenny);
}
