#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t.
 * @head: list.
 * Return: the head node’s data (n) and 0 if list empty.
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	{
	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	}
	return (n);
}
