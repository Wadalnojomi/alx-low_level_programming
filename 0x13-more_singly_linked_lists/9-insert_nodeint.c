#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: list.
 * @idx: the index of the list where the new node should be added.
 * @n: integer.
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i;

	new = malloc(sizeof(listint_t));
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		current = *head;
		for (i = 0; i < idx - 1; i++)
		{
			if (current == NULL)
				return (NULL);
			current = current->next;
		}
		new->next = current->next;
		current->next = new;
	}
	return (new);
}
