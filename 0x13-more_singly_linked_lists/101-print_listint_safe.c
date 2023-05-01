#include "lists.h"

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *carr;

	if (head != NULL)
	{
		carr = *head;
		while ((temp = carr) != NULL)
		{
			carr = carr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nnades = 0;
	listp_t *tr, *new, *add;

	tr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = tr;
		tr = new;

		add = tr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&tr);
				return (nnades);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnades++;
	}

	free_listp(&tr);
	return (nnades);
}
