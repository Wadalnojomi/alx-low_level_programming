#include "lists.h"
/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: list.
 * Return: number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	unsigned int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
