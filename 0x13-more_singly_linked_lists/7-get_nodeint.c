#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: list.
 * @index: the index of the node, starting at 0.
 * Return: nth node of a listint_t linked list,NULL if fail.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = head;

	for (temp = head; temp != NULL; temp = temp->next)
	{
		if (counter == index)
			return (temp);
		counter++;
	}
	return (temp);

}
