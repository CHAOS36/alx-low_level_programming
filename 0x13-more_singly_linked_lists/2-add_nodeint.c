
#include "lists.h"

/**
 * add_nodeint - always adds a new node at the beginning of a linked list
 * @head: double pointer to the first node of the linked list
 * @n: int value that represents the value to be stored in the new node that is being added to the linked list
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newer;

	newer = malloc(sizeof(listint_t));
	if (!newer)
		return (NULL);

	newer->n = n;
	newer->next = *head;
	*head = newer;

	return (newer);
}

