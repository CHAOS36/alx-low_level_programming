
#include "lists.h"

/**
 * add_nodeint - always adds a new node at the beginning of a linked list
 * @head: double pointer to the first node of the linked list
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *q;

	q = malloc(sizeof(listint_t));
	if (!q)
		return (NULL);

	q->n = n;
	q->next = *head;
	*head = q;

	return (q);
}

