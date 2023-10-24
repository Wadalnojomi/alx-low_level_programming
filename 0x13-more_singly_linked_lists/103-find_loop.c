#include "lists.h"
/**
 * find_listint_loop - finds a loop in a linked list
 * @head: linked list to search
 * Return: address of node where loop starts/returns, NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *new, *end;

	if (head == NULL)
		return (NULL);
	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (new = head; new != end; new = new->next)
			if (new == end->next)
				return (end->next);
	}

	return (NULL);
}
