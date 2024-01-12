#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *nve;
	dlistint_t *n;

	nve = malloc(sizeof(dlistint_t));
	if (nve == NULL)
		return (NULL);

	nve->n = n;
	nve->prev = NULL;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	nve->next = h;

	if (h != NULL)
		h->prev = nve;

	*head = nve;

	return (nve);
}
