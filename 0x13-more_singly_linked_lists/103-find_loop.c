#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowest = head;
	listint_t *fastest = head;

	if (!head)
		return (NULL);

	while (slowest && fastest && fastest->next)
	{
		fastest = fastest->next->next;
		slowest = slowest->next;
		if (fastest == slowest)
		{
			slowest = head;
			while (slowest != fastest)
			{
				slowest = slowest->next;
				fastest = fastest->next;
			}
			return (fastest);
		}
	}

	return (NULL);
}

