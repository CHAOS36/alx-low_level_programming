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
	dlistint_t *new;
	dlistint_t *p;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	p = *head;

	if (p != NULL)
	{
		while (p->prev != NULL)
			p = p->prev;
	}

	new->next = p;

	if (p != NULL)
		p->prev = new;

	*head = new;

	return (new);
}
