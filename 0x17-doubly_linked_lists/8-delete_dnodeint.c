#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *hr;
	dlistint_t *h2;
	unsigned int pp;

	hr = *head;

	if (hr != NULL)
		while (hr->prev != NULL)
			hr = hr->prev;

	pp = 0;

	while (hr != NULL)
	{
		if (pp == index)
		{
			if (pp == 0)
			{
				*head = hr->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = hr->next;

				if (hr->next != NULL)
					hr->next->prev = h2;
			}

			free(hr);
			return (1);
		}
		h2 = hr;
		hr = hr->next;
		pp++;
	}

	return (-1);
}
