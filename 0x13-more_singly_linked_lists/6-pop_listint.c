#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: points on the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 1 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int messi;

	if (!head || !*head)
		return (0);

	messi = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (messi);
}

