#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of a listint_t linked list.
 * @head: list.
 * Return: in success sum otherwise 0.
 */
int sum_listint(listint_t *head)
{
	int sum_node = 0;
	listint_t *temp = head;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		sum_node += temp->n;
	}
	return (sum_node);
}
