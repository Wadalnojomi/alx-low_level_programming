#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: naode of list.
 * Return: the number of elements inlist_t list.
 */
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
