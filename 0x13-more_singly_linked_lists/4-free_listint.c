#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: list of node.
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
		temp = NULL;
	}
}
